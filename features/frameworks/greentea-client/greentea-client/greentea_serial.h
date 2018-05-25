
/** \addtogroup frameworks */
/** @{*/
#ifndef GREENTEA_SERIAL_H
#define GREENTEA_SERIAL_H

#include "RawSerial.h"
#include "SingletonPtr.h"

#ifdef	SIMULATION
#include "LowLevelIOInterface.h"

class GreenteaSerial
{
public:
    GreenteaSerial();
    int getc();
    int putc(int cc);
    int puts(const char *str);
    int printf(const char *format, ...);
};

#else
class GreenteaSerial : public mbed::RawSerial {
public:
    GreenteaSerial();
};
#endif

extern SingletonPtr<GreenteaSerial> greentea_serial;
#endif

/** @}*/
