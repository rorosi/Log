#ifndef MakeLog_class
#define MakeLog_class

#include <stdio.h>
#include <time.h>
#include <sys/time.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>


#define     Log(fmt ,args...)           LogPrint(__LINE__, __func__, fmt, ## args)

class MakeLog
{
public:
	MakeLog() {};
	virtual ~MakeLog();
	void LogPrint (const int line, const char *func, const char *format, ... );

};


#endif
