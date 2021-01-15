#include "zzlog.h"

#include <stdio.h>

#define MAXBUF 256

void zzlog_log(int level, const char *file, const char *filename, int line, const char *fmt, ...) {
  char buf[MAXBUF];

  va_list ap;
  va_start(ap, fmt);
  vsnprintf(buf, MAXBUF, fmt, ap);
  va_end(ap);

  fprintf(stderr, "%s:%d %s\n", filename, line, buf);

}
