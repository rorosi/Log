#include "MakeLog.h"

MakeLog::~MakeLog()
{
}

void MakeLog::LogPrint (const int line, const char *func, const char *format, ... )
{
	FILE *fptr = fopen("/home/server/log/log.txt", "a");

	if (fptr == NULL)
	{
		printf("ERROR : Could not open file \n");
	}

	char log[100];
	va_list ap;
	time_t  *cur;
	struct  tm *now, rt;
	struct  timeval tv;

	gettimeofday(&tv, NULL);
	cur = (time_t *)&(tv.tv_sec);
	now = localtime_r(cur, &rt);
	
	
	va_start(ap,format);

	vsprintf(log, format, ap);

	fprintf(fptr, "[%02d:%02d:%02d.%03d] | <%s:%d> | %s", now->tm_hour, now->tm_min, now->tm_sec, (int)(tv.tv_usec/1000), func, line, log );

	va_end(ap);

	fclose(fptr);

}
