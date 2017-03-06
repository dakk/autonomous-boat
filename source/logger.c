#include <stdarg.h>
#include <stdio.h>
#include <time.h>

#include "logger.h"

char* asctime2 (const struct tm *timeptr) {
    static char result[26];
    sprintf(result, "%d/%.2d/%.2d %.2d:%.2d:%.2d",
        1900 + timeptr->tm_year,
        timeptr->tm_mon,
        timeptr->tm_mday, timeptr->tm_hour,
        timeptr->tm_min, timeptr->tm_sec);
    return result;
}

void log (const char *mod, const char *format, ...) {
    time_t rawtime;
    struct tm * timeinfo;
    time (&rawtime);
    timeinfo = localtime ( &rawtime );
  
    printf ("[%s] %s: ", asctime2 (timeinfo), mod);
    va_list args;
    va_start(args, format);
    printf(format, args);
    va_end(args);
}