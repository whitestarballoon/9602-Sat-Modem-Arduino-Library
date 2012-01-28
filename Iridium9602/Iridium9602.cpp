
#if (ARDUINO >= 100)
#include <Arduino.h>
#else
#include <WProgram.h>
#endif

#include <avr/pgmspace.h>
#include <string.h>

#include "Iridium9602.h"



Iridium9602::Iridium9602(HardwareSerial& sPort) : _HardwareSerial(sPort)
{
}

void Iridium9602::initModem()
{
	//Send out some initialization to the modem
	
}

boolean Iridium9602::sendMsg( unsigned char * msg, int length)
{
   return true;
}
int Iridium9602::getMsgWaitingCount()
{
	return 0;
}

int Iridium9602::retrieveMsg( unsigned char * msg)
{
	return 0;
}

boolean Iridium9602::isSatAvailable(void)
{
	return true;;
}

void Iridium9602::powerOff(void)
{
}

void Iridium9602::powerOn(void)
{
}
