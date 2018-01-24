#ifndef _SEPS525_OLED_H_
#define _SEPS525_OLED_H_

#include <Adafruit_GFX.h>

class SEPS525_OLED : public Adafruit_GFX {
	public:
		SEPS525_OLED(int8_t _CS, int8_t _DC, int8_t _RST, int8_t _EN);

		void begin(void);

		void drawPixel(int16_t x, int16_t y, uint16_t color);
		void drawFastVLine(int16_t x, int16_t y, int16_t h, uint16_t color);
		void drawFastHLine(int16_t x, int16_t y, int16_t w, uint16_t color);
		void fillRect(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color);
		uint16_t color565(uint8_t r, uint8_t g, uint8_t b);
	
	
	#ifdef (ESP8266) || defined (ESP32)
        int8_t   _cs, _dc, _rst, _sclk, _mosi, _miso, _en;
	#endif
	
};

#endif
