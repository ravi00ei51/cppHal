class interruptModuleGenerator:
    __status__                  = "";
    __emptyLineError__          = "";
    __enumIntVectorList__       = "";
    __intVectorList__           = "";
    __enumClass__               = "";
    __boardName__               = "";
    __tupleFunctionList__       = "";
    __moduleIntCtrlClass__      = "";
    __intCtrlTable__            = "";
    __intCtrlTableList__        = "";
    def getLinesFromFile( self, filePath, boardName ):
        fp       = open( filePath, "r" );
        allLines = fp.readlines();
        index    = 0;
        parsedLineIndex = 0;
        self.__boardName__ = boardName;
        for line in allLines:
            index+=1;
            self.__currentLine__ = index;
            if not line.strip():
                self.__emptyLineError__ += "Line: "+str(self.__currentLine__)+": Empty Line found ";
            else:
                parsedLineIndex+=1;
                var = self.__cleanStrings__(line);
                self.__scanLineForInterrupt__( var );
        self.__tupleFunctionList__ += "NULL_FUNCTION_PTR";
        self.__generateEnumClass__();

    def __scanLineForInterrupt__( self, var ):
        lineList = var.split(",");
        self.__enumIntVectorList__ += "        INT_VECTOR_"+lineList[0]+",\n";
        self.__intVectorList__     += "INT_VECTOR_"+lineList[0]+",";
        #print "==================================================================================================="
        #print "==================================================================================================="
        #print lineList
        #print "==================================================================================================="
        #print "==================================================================================================="
 
        if( lineList[1] == "PROGRAMMABLE" ):
            self.__tupleFunctionList__ += "NULL_FUNCTION_PTR, ";
            self.__intCtrlTableList__  += "    iCtl::intCtrl::interruptVector<iCtl::intCtrl::INT_VECTOR_"+lineList[0]+">,\n";
        else:
            if( lineList[1] == "RESERVED" ):
                self.__tupleFunctionList__ += "NULL_FUNCTION_PTR, ";
                self.__intCtrlTableList__  += "    RESERVED_INTERRUPT_VECTOR,\n";
            else:
                self.__tupleFunctionList__ += lineList[1]+", ";
                self.__intCtrlTableList__  += "    "+lineList[1]+",\n";
       
    def __generateEnumClass__( self ):
        self.__enumClass__+= "template <> class iEnum<"+self.__boardName__+">\n";
        self.__enumClass__+= "{\n";
        self.__enumClass__+= "public:\n";
        self.__enumClass__+= "    enum val:unsigned int\n";
        self.__enumClass__+= "    {\n";
        self.__enumClass__+= self.__enumIntVectorList__;
        self.__enumClass__+= "    };\n";
        self.__enumClass__+= "};\n";
        print self.__enumClass__
        tupleList = self.__tupleFunctionList__.split(',');
        var = self.__cleanStrings__(self.__tupleFunctionList__)
        #print "=============================================================================================="
        #print var
        #print self.__tupleFunctionList__
        #print "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"
        for row in tupleList:
            check = var.split(',')[0]
            #print check+" "+var+"..............................................................................................................."
            if( check == "NULL_FUNCTION_PTR" ):
                print "template    fptr funcTuple<"+ var+">::val;";
                print "template <> fptr funcTuple<"+ var+">::val;";
            var = var.split(',',1)[-1];
        print "template    funcTuple<"+self.__tupleFunctionList__+"> \n             mcuIntModel<"+self.__boardName__+", "+self.__tupleFunctionList__+">::reg;";
        print "template <> funcTuple<"+self.__tupleFunctionList__+"> \n             mcuIntModel<"+self.__boardName__+", "+self.__tupleFunctionList__+">::reg;";
        self.__generateModuleIntCtrlClass__();
        self.__generateInterruptTable__();

    def __generateModuleIntCtrlClass__( self ):
        self.__moduleIntCtrlClass__+= "template <> class moduleIntCtrl<"+self.__boardName__+">\n";
        self.__moduleIntCtrlClass__+= "{\n";
        self.__moduleIntCtrlClass__+= "public:\n";
        self.__moduleIntCtrlClass__+= "    typedef mcuIntModel<"+self.__boardName__+", "+self.__tupleFunctionList__+"> intCtrl;\n";
        self.__moduleIntCtrlClass__+= "private:\n";
        self.__moduleIntCtrlClass__+= "    __attribute__((section(\".vectors\"))) static volatile fptr interruptTable[100];\n";
        self.__moduleIntCtrlClass__+= "};\n";
        print self.__moduleIntCtrlClass__

    def __generateInterruptTable__( self ):
        self.__intCtrlTable__+= "__attribute__((section(\".vectors\"))) static volatile fptr interruptTable[100] = \n";
        self.__intCtrlTable__+= "{\n";
        self.__intCtrlTable__+= self.__intCtrlTableList__;
        self.__intCtrlTable__+= "};";
        print self.__intCtrlTable__;

    def __cleanStrings__(self, var):
        var = var.replace(" ", "");
        var = var.replace("\n","");
        var = var.replace("\r","");
        return var;

x = interruptModuleGenerator();
x.getLinesFromFile("interrupt.csv", "STM32F103RB");
