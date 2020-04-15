########################################################################################################################
# History
# 18/01/2019 - Created first draft of genC++.py. Created skelton class codeGenerator
#
########################################################################################################################

import sys
import re

########################################################################################################################
#  Class Name        - CodeGenerator
#
#  Class description - This class provides APIs to generate register level abstraction for given MCU.
#
#  Author - Ravi
########################################################################################################################
class codeGenerator:
    __status__                  = "";
    __emptyLineError__          = "";
    # File attributes of the class
    __enumLine__                = "";
    __bitRangeLine__            = "";
    __accessLine__              = "";
    __currentLine__             = 0;
    # MCU module attributes
    __moduleName__              = "";
    __moduleNameList__          = [];
    __moduleAddressList__       = [];
    __moduleMacroNameList__     = [];
    __moduleMacroDefineList__   = [];
    __moduleClassList__         = [];
    __moduletypedefList__       = [];
    __enumClassList__           = [];
    # MCU register Attributes
    __registerNameList__        = [];
    __registerAddressList__     = [];
    __registerMacroNameList__   = [];
    __registerMacroDefineList__ = [];
    __registerTypedefList__     = [];
    __enumBodyList__            = [];
    __accessBodyList__          = [];
    __bitRangeBodyList__        = [];
    # transient attributes
    __transientName__           = "";
    __transientBase__           = "";
    __transientCount__          = 0;
    __transientOffset__         = 0;
    __transientAddressList__    = [];
    __transientNameList__       = [];
    __parseType1ListResult__    = "FAILED"
    __parseType2ListResult__    = "FAILED"
    __parseType3ListResult__    = "FAILED"
    # Class body
    __tupleArguments__             = "";
    __classModuleRegisterDecl__ = [[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[]];
    __classStaticMemberDecl__   = [[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[]];
    __registerClass__           = [];
    mMacro = "";
    rMacro = "";
    mM = "";
    macroList   = [];
    enumList    = [];
    typedefList = [];
    tupleList   = [];
########################################################################################################################
#
#  Interface name        - CodeGenerator
#
#  Interface description - This class provides APIs to generate register level abstraction for given MCU.
#
#  Interface arguments   - None
#
#  Author - Ravi
#
########################################################################################################################

    def __init__(self):
        self.__status__ = "STARETED";
########################################################################################################################
#
#  Interface name        - __cleanStrings__
#
#  Interface description - This interface clears spaces and nextline characters from the string argument.
#
#  Interface arguments   - var - string variable
#
#  Author - Ravi
#
########################################################################################################################

    def __cleanStrings__(self, var):
        var = var.replace(" ", "");
        var = var.replace("\n","");
        var = var.replace("\r","");
        return var;

########################################################################################################################
#
#  Interface name        - __checkStrings__
#
#  Interface description - This interface checks if there are any invalid characters in the string which might stop this 
#                          script generating c++ code.
#
#  Interface arguments   - line - string variable
#
#  Author - Ravi
#
########################################################################################################################

    def __checkStrings__(self, var):
        return var;

########################################################################################################################
#
#  Interface name        - __checkEnumStrings__
#
#  Interface description - This interface checks if given string has any invalid charcters which does not comply to c++ 
#                          standards of enum declaration 
#
#  Interface arguments   - line - string variable
#
#  Author - Ravi
#
########################################################################################################################

    def __checkEnumStrings__( self, line ):
        tempLine = line.replace(",","");
        if not re.match("^[A-Za-z0-9_]", tempLine ):
            line = "";
        return line;

########################################################################################################################
#
#  Interface name        - __checkEnumStrings__
#
#  Interface description - This interface checks if given string has only numbers(0 to 9), comma(,) and hyphen(-) to 
#                          confirm its a valid bit range string
#
#  Interface arguments   - line - string variable
#
#  Author - Ravi
#
########################################################################################################################

    def __checkBitRangeStrings__( self, line ):
        tempLine = line.replace(",","");
        tempLine = tempLine.replace("-","");
        if not re.match("^[0-9]", tempLine ):
            line = "";
        return line;

########################################################################################################################
#
#  Interface name        - __checkEnumStrings__
#
#  Interface description - This interface checks if given string contains valid charcters for access string
#
#  Interface arguments   - line - string variable
#
#  Author - Ravi
#
########################################################################################################################

    def __checkAccessStrings__( self, line ):
        tempLine = line.replace(",","");
        if not re.match("^[rw]", tempLine ):
            line = ""
        return line;
########################################################################################################################
#
#  Interface name        - __scanLineForModuleAttribute__
#
#  Interface description - This interface processes given line to check if it contains any relevant module information
#
#  Interface arguments   - moduleLine - string which possibly contains module info
#
#  Author - Ravi
#
########################################################################################################################
    def __resetTransientAttributes__( self ):
        self.__transientName__           = "";
        self.__transientBase__           = "";
        self.__transientCount__          = 0;
        self.__transientOffset__         = 0;
        self.__transientAddressList__    = [];
        self.__transientNameList__       = [];

    def __scanLineForModuleAttribute__( self, moduleLine ):
        retVal = 1;
        self.__resetTransientAttributes__();
        self.__moduleMacroNameList__     = []
        self.__moduleMacroDefineList__   = [];
        #self.__moduleClassList__         = [];

        moduleLine          = self.__cleanStrings__(moduleLine);
        moduleLine          = self.__checkStrings__(moduleLine);
        moduleList          = moduleLine.split(",");
        if( len(moduleList) >= 2 ):
            self.__parseType1ModuleOrRegisterList__( moduleList );
            if( self.__parseType1ListResult__ == "FAILED" ):
                self.__parseType2ModuleOrRegisterList__( moduleList );
                if( self.__parseType2ListResult__ == "FAILED" ):
                    self.__parseType3ModuleOrRegisterList__( moduleList );
                    if( self.__parseType3ListResult__ == "FAILED" ):
                        print "Line: "+str(self.__currentLine__)+": Invalid module Address in register configuration file"
                        retVal = 0;
        else:
            print "Line: "+str(self.__currentLine__)+": Invalid module Address in register configuration file"
            retVal = 0;
        if( retVal == 1 ):
            self.__moduleName__        = self.__transientName__;
            self.__moduleNameList__    = list( self.__transientNameList__ );
            self.__moduleAddressList__ = list( self.__transientAddressList__ );
            index = 0;
            for row in self.__moduleNameList__:
                self.__moduleMacroNameList__.append( row.upper()+"_BASE_ADDRESS" );
                self.__moduleMacroDefineList__.append( "#define          "+(row.upper())+"_BASE_ADDRESS                " +self.__moduleAddressList__[index] );
                self.__moduleClassList__.append( "template <> class moduleName<"+row.upper()+"_BASE_ADDRESS>" );
                self.__moduletypedefList__.append( "typedef moduleName<"+row.upper()+"_BASE_ADDRESS>  "+row.lower()+";" );
                index += 1;
########################################################################################################################
#
#  Interface name        - __scanLineForRegisterAttribute__
#
#  Interface description - This interface processes given line to check if it contains any relevant module information
#
#  Interface arguments   - moduleLine - string which possibly contains module info
#
#  Author - Ravi
#
########################################################################################################################

    def __scanLineForRegisterAttribute__( self, moduleLine ):
        retVal = 1;
        self.__resetTransientAttributes__();
        self.__registerNameList__          = [];
        self.__registerMacroNameList__     = [];
        #self.__registerMacroDefineList__   = [];

        moduleLine          = self.__cleanStrings__(moduleLine);
        moduleLine          = self.__checkStrings__(moduleLine);
        moduleList          = moduleLine.split(",");
        if( len(moduleList) >= 2 ):
            self.__parseType1ModuleOrRegisterList__( moduleList );
            if( self.__parseType1ListResult__ == "FAILED" ):
                self.__parseType2ModuleOrRegisterList__( moduleList );
                if( self.__parseType2ListResult__ == "FAILED" ):
                    self.__parseType3ModuleOrRegisterList__( moduleList );
                    if( self.__parseType3ListResult__ == "FAILED" ):
                        print "Line: "+str(self.__currentLine__)+": Invalid module Address in register configuration file"
                        retVal = 0;
        else:
            print "Line: "+str(self.__currentLine__)+": Invalid module Address in register configuration file"
            retVal = 0;
        if( retVal == 1 ):
            self.__registerNameList__    = list( self.__transientNameList__ );
            self.__registerAddressList__ = list( self.__transientAddressList__ );
            index = 0;
            for col in self.__moduleNameList__:
                index = 0;
                for row in self.__registerNameList__:
                    self.__registerMacroNameList__.append( col.upper()+"_"+row.upper()+"_OFFSET" );
                    self.__registerMacroDefineList__.append( "#define     "+(col.upper())+"_"+(row.upper())+"_OFFSET    "+self.__registerAddressList__[index] );
                    index += 1;
########################################################################################################################
#
#  Interface name        - __parseType1ModuleOrRegisterList__
#
#  Interface description - This interface processes given line to check if it contains any relevant module information
#
#  Interface arguments   - moduleLine - string which possibly contains module info
#
#  Author - Ravi
#
########################################################################################################################

    def __parseType1ModuleOrRegisterList__( self, inputList ):
        listLength = len( inputList );
        retVal     = 0;
        if( listLength == 2 ):
            if re.match("^[A-Za-z0-9_]",inputList[0] ):
                if re.match("^[0xA-F0-9]",inputList[1] ):
                    self.__transientName__   = inputList[0];
                    self.__transientBase__   = inputList[1];
                    self.__transientCount__  = 0;
                    self.__transientOffset__ = 0;
                    self.__transientAddressList__.append( self.__transientBase__ );
                    self.__transientNameList__.append( self.__transientName__ );
                    self.__parseType1ListResult__ = "SUCCESS";
                    retVal = 1;
        if( retVal == 0 ):
            #print "FAILED 1"
            self.__parseType1ListResult__ = "FAILED";

    def __parseType2ModuleOrRegisterList__( self, inputList ):
        listLength = len( inputList );
        retVal     = 0;
        count = 0;
        if( listLength == 4 ):
            if re.match("^[A-Za-z0-9_]",inputList[0] ):
                if re.match("^[0xA-F0-9]",inputList[1] ):
                    if( inputList[2].isdigit() == True ):
                        if re.match("^[0xA-F0-9]",inputList[3] ):
                            self.__transientName__        = inputList[0];
                            self.__transientBase__        = inputList[1];
                            self.__transientCount__       = int( inputList[2] );
                            self.__transientOffset__      = inputList[3];
                            while( count != self.__transientCount__ ):
                                self.__transientNameList__.append( self.__transientName__ + str(count+1) );
                                self.__transientAddressList__.append( "0x"+hex( int(self.__transientBase__,16) + count*int(self.__transientOffset__,16) )[2:].zfill(8) );
                                count += 1;
                            self.__parseType2ListResult__ = "SUCCESS";
                            retVal = 1;
        if( retVal == 0 ):
            #print "FAILED 2"
            self.__parseType2ListResult__ = "FAILED";

    def __parseType3ModuleOrRegisterList__( self, inputList ):
        listLength = len( inputList );
        retVal     = 0;
        count = 1;
        if( listLength > 2 ):
            if re.match("^[A-Za-z0-9_]",inputList[0] ):
                self.__transientName__        = inputList[0];
                self.__transientBase__        = inputList[1];
                self.__transientCount__       = listLength;
                retVal = 1;
                while( count != self.__transientCount__ ) and ( retVal == 1 ):
                    if re.match("^[0xA-Fa-f0-9]",inputList[count] ):
                        self.__transientAddressList__.append( inputList[count] );
                        self.__transientNameList__.append( self.__transientName__ + str(count) );
                    else:
                        retVal = 0;
                    count += 1;
                self.__transientOffset__ = 0;
        if( retVal == 0 ):
            self.__parseType3ListResult__ = "FAILED";
            #print "FAILED 3"
        else:
            self.__parseType3ListResult__ = "SUCCESS";


    def debugModuleLine( self, moduleLine ):
        self.__scanLineForModuleAttribute__(moduleLine);
    def debugRegisterLine( self, moduleLine ):
        self.__scanLineForRegisterAttribute__(moduleLine);
    def printModuleAttributes( self ):
        for row in self.__moduleClassList__:
            print row+"\n";
    def printRegisterAttributes( self ):
        for row in self.__enumClassList__:
            print row+"\n";
    def generateRegisterFileBody( self ):
        fileBody = "";
        fileBody += "#ifndef __H_"+self.__moduleName__.upper()+"_H__\n";
        fileBody += "#define __H_"+self.__moduleName__.upper()+"_H__\n";
        fileBody += "#include \"Tuple.h\"\n\n";
        for col in self.__moduleMacroDefineList__:
            fileBody += col+"\n";
        for col in self.__registerMacroDefineList__:
            fileBody += col+"\n";
        for col in self.__enumClassList__:
            fileBody += col;
        for col in self.__registerClass__:
            for row in col:
                fileBody += row;
        fileBody += "#endif\n";
        return fileBody

    def __generateRegisterClass__( self ):
        colIndex = 0;
        for col in self.__moduleNameList__:
            classData = self.__moduleClassList__[colIndex]+"\n{\npublic:\n";
            for row in self.__classModuleRegisterDecl__[colIndex]:
                classData += row+"\n";
            classData += "};\n"
            classData += self.__moduletypedefList__[colIndex]+"\n";
            for row in self.__classStaticMemberDecl__[colIndex]:
                classData += row+"\n";
            self.__registerClass__.append(classData);
            colIndex+=1;
    def __generateEnumClassBodyDeclarations__( self ):
        rowIndex = 0;
        colIndex = 0;
        for col in self.__moduleNameList__:
            rowIndex = 0;
            for row in self.__registerNameList__:
                enumBody  = "template <> class xEnum<"+col.upper()+"_BASE_ADDRESS"+", "+col.upper()+"_"+row.upper()+"_OFFSET"+">\n{\npublic:\n"
                enumBody += "    enum val:unsigned int\n    {\n"
                for enums in self.__enumBodyList__:
                    enumBody += "        "+enums+",\n";
                enumBody += "    };\n};\n"
                self.__enumClassList__.append( enumBody );
                rowIndex += 1;
            colIndex += 1;

    def __generateRegisterClassBodyDeclarations__( self ):
        rowIndex = 0;
        colIndex = 0;
        for col in self.__moduleNameList__:
            rowIndex = 0;
            for row in self.__registerNameList__:
                macro = col.upper()+"_BASE_ADDRESS, "+col.upper()+"_"+row.upper()+"_OFFSET"+", ";
                self.__classModuleRegisterDecl__[colIndex].append("    typedef    mcuRegister<unsigned int, "+macro+self.__tupleArguments__+"> "+row.lower()+";");
                self.__classStaticMemberDecl__[colIndex].append("template     Tuple<unsigned int, "+macro+self.__tupleArguments__+"> "+col.lower()+"::"+row.lower()+"::reg;\n"+"template <>  Tuple<unsigned int, "+macro+self.__tupleArguments__+"> "+col.lower()+"::"+row.lower()+"::reg;");
                rowIndex += 1;
            colIndex += 1;

    def __generateTupleArguments__( self ):
        self.__tupleArguments__ = "";
        index = 0;
        for row in self.__accessBodyList__:
            self.__tupleArguments__ += row+", "+self.__bitRangeBodyList__[index]+" " ;
            index += 1;
        self.__tupleArguments__ = self.__tupleArguments__.strip(" ");
#  Interface arguments   - line - string variable
#
#  Author - Ravi
#
########################################################################################################################

    def __scanLineForRegisterEnums__( self, line ):
        self.__enumBodyList__=[];
        index = 0;
        line = self.__cleanStrings__(line);
        line = self.__checkEnumStrings__(line);
        if( line != "" ):
            self.__enumLine__ = line;
            lineList = line.split(",");
            lineList.reverse();
            for row in lineList:
                if( row == "RESERVED" ):
                    self.__enumBodyList__.append(row+"_"+str(index));
                    index += 1;
                else:
                    self.__enumBodyList__.append(row);
        else:
            print "Line: "+str(self.__currentLine__)+": enum line is not properly formatted";

    def printEnums( self, var ):
        self.__scanLineForRegisterEnums__( var );
    def printAccess( self, var ):
        self.__scanLineForRegisterAccess__( var );
    def printBitRange( self, var ):
        self.__scanLineForRegisterBitRange__( var );
########################################################################################################################
#
#  Interface name        - __scanLineForRegisterBitRange__
#
#  Interface description - This interface processes given line to check if it contains any relevant information of bit
#                          ranges to form a register class to access different bit fields
#
#  Interface arguments   - line - string which possibly contains bit range info
#
#  Author - Ravi
#
########################################################################################################################

    def __scanLineForRegisterBitRange__( self, line ):
        self.__bitRangeBodyList__ = [];
        line = self.__cleanStrings__(line);
        line = self.__checkBitRangeStrings__(line);
        if( line != "" ):
            self.__bitRangeLine__ = line.split(",");
            for row in reversed(self.__bitRangeLine__):
                if( len(row) == 1 ) or ( len(row) == 2 ):
                    self.__bitRangeBodyList__.append(row+"u, 1u,");
                if( len(row) == 3 ) or ( len(row) == 4 ) or ( len(row) == 5 ):
                    rowList = row.split("-");
                    self.__bitRangeBodyList__.append( rowList[1]+"u, "+ str( int( rowList[0] ) - int( rowList[1] ) + 1 )+"u," );
            self.__bitRangeBodyList__[-1] = self.__bitRangeBodyList__[-1].rstrip(",");
        else:
            print "Line: "+str(self.__currentLine__)+": bit range line is not properly formatted";

########################################################################################################################
#
#  Interface name        - __scanLineForRegisterAccess__
#
#  Interface description - This interface processes given line to check if it contains any relevant information of bit
#                          ranges to form a register class to access different bit fields
#
#  Interface arguments   - line - string which possibly contains access info for particular register
#
#  Author - Ravi
#
########################################################################################################################

    def __scanLineForRegisterAccess__( self, line ):
        line = self.__cleanStrings__(line);
        line = self.__checkAccessStrings__(line);
        self.__accessBodyList__ = [];
        if( line != "" ):
            self.__accessLine__ = line;
            lineList = line.split(",");
            lineList.reverse();
            for row in lineList:
                if( row == "" ):
                    self.__accessBodyList__.append("RESERVED");
                if( row == "r" ):
                    self.__accessBodyList__.append("READ_ONLY");
                if( row == "w" ):
                    self.__accessBodyList__.append("WRITE_ONLY");
                if( row == "rw" ):
                    self.__accessBodyList__.append("READ_WRITE");
        else:
            print "Line: "+str(self.__currentLine__)+": access line is not properly formatted";
    def createListsForCodeGeneration( self, count ):
        moduleN = self.__moduleName__;
        moduleA = self.__moduleAddress__;
        registerN = self.__registerName__;
        registerO = self.__registerAddress__;
        self.mN = moduleN;
        self.rN = registerN, count;
        el = self.__enumLine__;
        al = self.__accessLine__;
        brl = self.__bitRangeLine__;
        moduleMacro   = self.mM;
        registerMacro = self.createMcuModuleRegisterOffsetDefines( moduleN, registerN, registerO, count );
        self.mMacro = moduleMacro;
        self.rMacro = registerMacro;
        self.createMcuModuleRegisterEnums(el, moduleMacro, registerMacro);
        self.createMcuModuleRegisterTypedefs( moduleN, registerN,  moduleMacro, registerMacro, al, brl );

    def printVars( self ):
        print self.__moduleName__
        print self.__moduleAddress__
        print self.__registerName__
        print self.__registerAddress__
        print self.__enumLine__
        print self.__bitRangeLine__
        print self.__accessLine__

########################################################################################################################
#
#  Interface name        - getLinesFromFile
#
#  Interface description - This interface reads the lines from the file and processes them to autogenerate C++ code
#
#  Interface arguments   - filePath - string containing path of register configuration file
#
#  Author - Ravi
#
########################################################################################################################

    def getLinesFromFile( self, filePath ):
        fp = open( filePath, "r" );
        allLines = fp.readlines();
        index = 0;
        parsedLineIndex = 0;
        for line in allLines:
            index+=1;
            self.__currentLine__ = index;
            if not line.strip():
                self.__emptyLineError__ += "Line: "+str(self.__currentLine__)+": Empty Line found ";
            else:
                parsedLineIndex+=1;
                if( parsedLineIndex == 1 ):
                    self.__scanLineForModuleAttribute__(line);
                else:
                    if( (parsedLineIndex - 2)%4 == 0 ):
                        self.__scanLineForRegisterAttribute__(line);
                    if( (parsedLineIndex - 2)%4 == 1 ):
                        self.__scanLineForRegisterEnums__(line);
                        self.__generateEnumClassBodyDeclarations__();
                    if( (parsedLineIndex - 2)%4 == 2 ):
                        self.__scanLineForRegisterBitRange__(line);
                    if( (parsedLineIndex - 2)%4 == 3 ):
                        self.__scanLineForRegisterAccess__(line);
                        self.__generateTupleArguments__();
                        self.__generateRegisterClassBodyDeclarations__();

        self.__generateRegisterClass__();
        fp.close();

########################################################################################################################
#
#  Interface name        - createMcuModuleBaseAddressDefines
#
#  Interface description - This interface generates base address macro for the autogenerated code. Macro include base
#                          address of the module and its registers for which c++ code is generated.
#
#  Interface arguments   - moduleName        - string variable containing the module name of the MCU
#                          moduleBaseAddress - string containg bse address in hex form for the MCU module under
#                                              consideration for code generation.
#
#  Author - Ravi
#
########################################################################################################################

    def createMcuModuleBaseAddressDefines( self, moduleName, moduleBaseAddress ):
        moduleName        = self.__cleanStrings__( moduleName );
        moduleName        = self.__checkStrings__( moduleName );
        moduleBaseAddress = self.__cleanStrings__( moduleBaseAddress );
        moduleBaseAddress = self.__checkStrings__( moduleBaseAddress );
        moduleName        = moduleName.upper();
        moduleMacro       = moduleName+"_BASE_ADDRESS";
        self.macroList.append("#define      "+moduleName+"_BASE_ADDRESS"+"    ( "+moduleBaseAddress+"u )");
        return moduleMacro;

########################################################################################################################
#
#  Interface name        - createMcuModuleRegisterOffsetDefines
#
#  Interface description - This interface generates register address offset for the module under consideration.
#
#
#  Interface arguments   - moduleName        - string variable containing the module name of the MCU
#                          registerName      - string containing name of the register under consideration
#                          moduleOffset      - string containg address offset in hex form for the MCU module and register
#                                              under consideration for code generation.
#
#  Author - Ravi
#
########################################################################################################################

    def createMcuModuleRegisterOffsetDefines( self, moduleName, registerName, moduleOffset, count ):
        moduleName   = self.__cleanStrings__( moduleName );
        moduleName   = self.__checkStrings__( moduleName );
        moduleOffset = self.__cleanStrings__( moduleOffset );
        moduleOffset = self.__checkStrings__( moduleOffset );
        registerName = self.__cleanStrings__( registerName );
        registerName = self.__checkStrings__( registerName );
        moduleName        = moduleName.upper();
        registerName      = registerName.upper();
        c = self.__registerCount__;
        if( c != 0 ):
            registerMacro     = moduleName+"_"+registerName+str(count)+"_OFFSET";
        else:
            registerMacro     = moduleName+"_"+registerName+"_OFFSET";
        self.macroList.append("#define      "+registerMacro+"    ( "+moduleOffset+"u )");
        return registerMacro

########################################################################################################################
#
#  Interface name        - createMcuModuleRegisterEnums
#
#  Interface description - This interface generates xEnum class which signifies the bit fields for the module's register
#                          under consideration.
#
#  Interface arguments   - var               - string variable containing list of bit fields to be represented as enum
#                                              values in xEnum class of autogenerated code
#                          address           - string containing base address in hex for the module under consideration
#                          moduleOffset      - string containg address offset in hex form for the MCU module and register
#                                              under consideration.
#
#  Author - Ravi
#
########################################################################################################################

    def createMcuModuleRegisterEnums( self, var, address, offset ):
        var      = self.__cleanStrings__( var );
        var      = self.__checkStrings__( var );
        address  = self.__cleanStrings__( address );
        address  = self.__checkStrings__( address );
        offset   = self.__cleanStrings__( offset );
        offset   = self.__checkStrings__( offset );
        var      = var.split(",");
        enumVar  = "template <> class xEnum<"+address+", "+offset+">\n";
        enumVar += "{\n";
        enumVar += "    enum val:unsigned int\n";
        enumVar += "    {\n";
#        index    = 0;
        for row in reversed(var):
#            if( row == "RESERVED" ):
#                row   += "_" + str(index);
#                index += 1;
            if( row != var[0]):
                enumVar += "        "+row+",\n";
            else:
                enumVar += "        "+row+"\n";
        enumVar += "    };\n"
        enumVar += "};\n"
        self.enumList.append(enumVar);

########################################################################################################################
#
#  Interface name        - createMcuModuleRegisterTypedefs
#
#  Interface description - This interface generates module class with sub registers typedefs inside it. Each subregister
#                          is represent by mcu register class which has all the read write permissions plus bit start
#                          and bit size values for each bit field. It also generates declarations to reg member variable
#                          of the mcuRegister class.
#
#  Interface arguments   - var               - string variable containing list of bit fields to be represented as enum
#            rcc,0x40021000                                  values in xEnum class of autogenerated code
#                          address           - string containing base address in hex for the module under consideration
#                          moduleOffset      - string containg address offset in hex form for the MCU module and register
#                                              under consideration
#
#  Author - Ravi
#
########################################################################################################################

    def createMcuModuleRegisterTypedefs( self, moduleName, registerName, address, offset, registerAccess, registerBitRange ):
        accessList         = [];
        bitRangeStartList  = [];
        bitRangeLengthList = [];
        registerAccess     = self.__cleanStrings__( registerAccess );
        registerAccess     = self.__checkStrings__( registerAccess );
        registerBitRange   = self.__cleanStrings__( registerBitRange );
        registerBitRange   = self.__checkStrings__( registerBitRange );
        registerAccess     = registerAccess.split(",");
        registerBitRange   = registerBitRange.split(",");
        for row in reversed(registerAccess):
            if( row == "" ):
                accessList.append("RESERVED");
            if( row == "rw" ):
                accessList.append("READ_WRITE");
            if( row == "r" ):
                accessList.append("READ_ONLY");
            if( row == "w" ):
                accessList.append("WRITE_ONLY");
        for row in reversed(registerBitRange):
            if( len(row) == 1 ) or ( len(row) == 2 ):
                bitRangeStartList.append(row);
                bitRangeLengthList.append("1");
            if( len(row) == 3 ) or ( len(row) == 4 ) or ( len(row) == 5 ):
                rowList = row.split("-");
                bitRangeStartList.append( rowList[1] );
                bitRangeLengthList.append( str( int( rowList[0] ) - int( rowList[1] ) + 1 ) );
        index = 0;
        result = "";
        for row in accessList:
            #if( row != accessList[-1] ):
            result += row+", "+ bitRangeStartList[index]+"u, "+bitRangeLengthList[index]+"u, ";
            #else:
            #    result += row+", "+ bitRangeStartList[index]+"u, "+bitRangeLengthList[index]+"u";
            index += 1;
        result = result.strip(" ");
        result = result.strip(",");
        result = "unsigned int, "+address+", "+offset+", "+result;
        self.typedefList.append("typedef    mcuRegister<"+result+"> "+registerName+";");
        self.tupleList.append("template    Tuple<"+result+"> "+moduleName+"::"+registerName+"::reg;");
        self.tupleList.append("template <> Tuple<"+result+"> "+moduleName+"::"+registerName+"::reg;");

########################################################################################################################
#
# main program
#
########################################################################################################################

x = codeGenerator();
x.getLinesFromFile("spi.csv");
fileB = x.generateRegisterFileBody();
print fileB;
