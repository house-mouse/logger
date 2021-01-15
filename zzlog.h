#ifndef __ZZLOG_H__
#define __ZZLOG_H__

#include <stdarg.h>

enum { ZZLOG_TRACE, ZZLOG_DEBUG, ZZLOG_INFO, ZZLOG_WARN, ZZLOG_ERROR, ZZLOG_FATAL };


#define __FILENAME__ (__builtin_strrchr(__FILE__, '/') ? __builtin_strrchr(__FILE__, '/') + 1 : __FILE__)

#define zzlog_trace(...) zzlog_log(ZZLOG_TRACE, __FILE__, __FILENAME__, __LINE__, __VA_ARGS__)
#define zzlog_debug(...) zzlog_log(ZZLOG_DEBUG, __FILE__, __FILENAME__, __LINE__, __VA_ARGS__)
#define zzlog_info(...)  zzlog_log(ZZLOG_INFO,  __FILE__, __FILENAME__, __LINE__, __VA_ARGS__)
#define zzlog_warn(...)  zzlog_log(ZZLOG_WARN,  __FILE__, __FILENAME__, __LINE__, __VA_ARGS__)
#define zzlog_error(...) zzlog_log(ZZLOG_ERROR, __FILE__, __FILENAME__, __LINE__, __VA_ARGS__)
#define zzlog_fatal(...) zzlog_log(ZZLOG_FATAL, __FILE__, __FILENAME__, __LINE__, __VA_ARGS__)

void zzlog_log(int level, const char *file, const char *filename, int line, const char *fmt, ...);

#endif // __ZZ_LOG__
