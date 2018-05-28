#include "greentea-client/greentea_serial.h"

#ifndef	SIMULATION

SingletonPtr<GreenteaSerial> greentea_serial;

GreenteaSerial::GreenteaSerial() : mbed::RawSerial(USBTX, USBRX, MBED_CONF_PLATFORM_STDIO_BAUD_RATE) {};

#endif
