#ifndef FDB_LIQUID_CRYSTAL_I2C_H
#define FDB_LIQUID_CRYSTAL_I2C_H

typedef unsigned char uint8_t;
typedef unsigned char size_t;

// commands
#define LCD_CLEARDISPLAY ((uint8_t)0x01u)
#define LCD_RETURNHOME ((uint8_t)0x02u)
#define LCD_ENTRYMODESET ((uint8_t)0x04u)
#define LCD_DISPLAYCONTROL ((uint8_t)0x08u)
#define LCD_CURSORSHIFT ((uint8_t)0x10u)
#define LCD_FUNCTIONSET ((uint8_t)0x20u)
#define LCD_SETCGRAMADDR ((uint8_t)0x40u)
#define LCD_SETDDRAMADDR ((uint8_t)0x80u)

// flags for display entry mode
#define LCD_ENTRYRIGHT ((uint8_t)0x00u)
#define LCD_ENTRYLEFT ((uint8_t)0x02u)
#define LCD_ENTRYSHIFTINCREMENT ((uint8_t)0x01u)
#define LCD_ENTRYSHIFTDECREMENT ((uint8_t)0x00u)

// flags for display on/off control
#define LCD_DISPLAYON ((uint8_t)0x04u)
#define LCD_DISPLAYOFF ((uint8_t)0x00u)
#define LCD_CURSORON ((uint8_t)0x02u)
#define LCD_CURSOROFF ((uint8_t)0x00u)
#define LCD_BLINKON ((uint8_t)0x01u)
#define LCD_BLINKOFF ((uint8_t)0x00u)

// flags for display/cursor shift
#define LCD_DISPLAYMOVE ((uint8_t)0x08u)
#define LCD_CURSORMOVE ((uint8_t)0x00u)
#define LCD_MOVERIGHT ((uint8_t)0x04u)
#define LCD_MOVELEFT ((uint8_t)0x00u)

// flags for function set
#define LCD_8BITMODE ((uint8_t)0x10u)
#define LCD_4BITMODE ((uint8_t)0x00u)
#define LCD_2LINE ((uint8_t)0x08u)
#define LCD_1LINE ((uint8_t)0x00u)
#define LCD_5x10DOTS ((uint8_t)0x04u)
#define LCD_5x8DOTS ((uint8_t)0x00u)

// flags for backlight control
#define LCD_BACKLIGHT ((uint8_t)0x08u)
#define LCD_NOBACKLIGHT ((uint8_t)0x00u)

#define En ((uint8_t)0x04u)  // Enable bit
#define Rw ((uint8_t)0x02u)  // Read/Write bit
#define Rs ((uint8_t)0x01u)  // Register select bit

/**
 * This is the driver for the Liquid Crystal LCD displays that use the I2C bus.
 *
 * After creating an instance of this class, first call begin() before anything else.
 * The backlight is on by default, since that is the most likely operating mode in
 * most cases.
 */
class LiquidCrystal_I2C
{

public:
	/**
	 * Constructor
	 *
	 * @param lcd_addr	I2C slave address of the LCD display. Most likely printed on the
	 *					LCD circuit board, or look in the supplied LCD documentation.
	 * @param lcd_cols	Number of columns your LCD display has.
	 * @param lcd_rows	Number of rows your LCD display has.
	 * @param charsize	The size in dots that the display has, use LCD_5x10DOTS or LCD_5x8DOTS.
	 */
	LiquidCrystal_I2C(uint8_t lcd_addr, uint8_t lcd_cols, uint8_t lcd_rows, uint8_t charsize = LCD_5x8DOTS);

	/**
	 * Set the LCD display in the correct begin state, must be called before anything else is done.
	 */
	void begin();

	 /**
	  * Remove all the characters currently shown. Next print/write operation will start
	  * from the first position on LCD display.
	  */
	void clear();

	/**
	 * Next print/write operation will will start from the first position on the LCD display.
	 */
	void home();

	 /**
	  * Do not show any characters on the LCD display. Backlight state will remain unchanged.
	  * Also all characters written on the display will return, when the display in enabled again.
	  */
	void noDisplay();

	/**
	 * Show the characters on the LCD display, this is the normal behaviour. This method should
	 * only be used after noDisplay() has been used.
	 */
	void display();

	/**
	 * Do not blink the cursor indicator.
	 */
	void noBlink();

	/**
	 * Start blinking the cursor indicator.
	 */
	void blink();

	/**
	 * Do not show a cursor indicator.
	 */
	void noCursor();

	/**
 	 * Show a cursor indicator, cursor can blink on not blink. Use the
	 * methods blink() and noBlink() for changing cursor blink.
	 */
	void cursor();

	void scrollDisplayLeft();
	void scrollDisplayRight();
	void printLeft();
	void printRight();
	void leftToRight();
	void rightToLeft();
	void shiftIncrement();
	void shiftDecrement();
	void noBacklight();
	void backlight();
	bool getBacklight();
	void autoscroll();
	void noAutoscroll();
	void createChar(uint8_t, uint8_t[]);
	void setCursor(uint8_t, uint8_t);
	virtual size_t write(uint8_t);
	void command(uint8_t);

	inline void blink_on() { blink(); }
	inline void blink_off() { noBlink(); }
	inline void cursor_on() { cursor(); }
	inline void cursor_off() { noCursor(); }

// Compatibility API function aliases
	void setBacklight(uint8_t new_val);				// alias for backlight() and nobacklight()
	void load_custom_character(uint8_t char_num, uint8_t *rows);	// alias for createChar()
	void printstr(char * c, unsigned int tsize);

private:
	void send(uint8_t, uint8_t);
	void write4bits(uint8_t);
	void expanderWrite(uint8_t);
	void pulseEnable(uint8_t);
	uint8_t _addr;
	uint8_t _displayfunction;
	uint8_t _displaycontrol;
	uint8_t _displaymode;
	uint8_t _cols;
	uint8_t _rows;
	uint8_t _charsize;
	uint8_t _backlightval;
};

#endif // FDB_LIQUID_CRYSTAL_I2C_H
