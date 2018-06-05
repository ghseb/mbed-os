
/** \addtogroup frameworks */
/** @{*/
#ifndef GREENTEA_SERIAL_H
#define GREENTEA_SERIAL_H

#include "RawSerial.h"
#include "SingletonPtr.h"

class GreenteaSerial : public mbed::RawSerial {
public:
    GreenteaSerial();
};
#endif

extern SingletonPtr<GreenteaSerial> greentea_serial;

/** @}*/
