#include "greentea-client/greentea_serial.h"

SingletonPtr<GreenteaSerial> greentea_serial;

#ifdef	SIMULATION
#include "LowLevelIOInterface.h"

#define STRING_STACK_LIMIT    120

GreenteaSerial::GreenteaSerial() {};

int GreenteaSerial::getc()
{
	int cc;
	size_t len = __read(0, (unsigned char *) &cc, 1);
	if (len != 1)
		return -1;
	else
		return cc;
};

int GreenteaSerial::putc(int cc)
{
	return __write(1, (unsigned char *) &cc, 1);
};

int GreenteaSerial::puts(const char *str)
{
	while (*str)
		putc(*str ++);
	return 0;
};

int GreenteaSerial::printf(const char *format, ...)
{
	std::va_list arg;
	va_start(arg, format);
	// ARMCC microlib does not properly handle a size of 0.
	// As a workaround supply a dummy buffer with a size of 1.
	char dummy_buf[1];
	int len = vsnprintf(dummy_buf, sizeof(dummy_buf), format, arg);
	char *temp = new char[len + 1];

	vsprintf(temp, format, arg);
	puts(temp);
	delete[] temp;

	va_end(arg);
	return len;
}

#else

GreenteaSerial::GreenteaSerial() : mbed::RawSerial(USBTX, USBRX, MBED_CONF_PLATFORM_STDIO_BAUD_RATE) {};

#endif
