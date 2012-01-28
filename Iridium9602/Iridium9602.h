#ifndef Iridium9602_h
#define Iridium9602_h

#if (ARDUINO >= 100)
#include <Arduino.h>
#else
#include <WProgram.h>
#endif

#include <string.h>

class Iridium9602
{

public:
	Iridium9602( HardwareSerial& sPort);
	void initModem();
	boolean sendMsg( unsigned char * msg, int length);
	int getMsgWaitingCount();
	int retrieveMsg( unsigned char * msg);
	boolean isSatAvailable(void);
	void powerOff(void);
	void powerOn(void);	

private:
	HardwareSerial& _HardwareSerial;
	
	
};

#endif