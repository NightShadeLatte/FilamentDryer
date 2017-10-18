#ifndef _filadry_h
#define _filadry_h

#include "FSWebServerLib.h"
//#include "FSWebServerLib.h"

#define wordLEDS 121
//#define minutePIN 2
#define minuteLEDS 4

class Filadry : public AsyncFSWebServer {

public:
	//German(byte wordPIN);
	void ledsOff();
	void minutesOff();
	void writeWords(int Words[]);
	void writeMinutes(int Minute);
	void displayWords(byte minute, byte hour);
	void displayMinutes(byte minute);
	//void getTime();
	//void Word_Init();
	//byte hour, minute, second;
	byte LEDbrightness, maxBrightness, rValue, gValue, bValue, fadingDelay, fadingStep;
	boolean wordFading, minuteFading;

protected:
	//byte  hour, minute, second;
	//static const byte wordPositions[][8];
	//static const byte minutePositions[][5];
	//static const byte colours[][3];
	//static const char* colourName[9];
	//byte LEDbrightness, maxBrightness, rValue, gValue, bValue, fadingDelay, fadingStep;
	//boolean wordFading, minuteFading;

private:



};

//extern German word;

#endif // !1
