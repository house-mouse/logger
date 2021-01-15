#ifndef __CPUTIME_H__
#define __CPUTIME_H__

#include <time.h>
#include <sys/time.h>

void gettime(struct timespec *ts);

float diff_time(struct timespec *start, struct timespec *end);

#endif //__CPUTIME_H__
