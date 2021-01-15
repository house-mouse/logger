#include "cputime.hpp"

SecondTimer::SecondTimer() {
    reset();
}

SecondTimer::~SecondTimer() {
};

void SecondTimer::reset() {
    gettime(&start);
}


float SecondTimer::elapsed() {
    struct timespec now;
    gettime(&now);
    
    return diff_time(&start, &now);
}

bool operator<(const struct timespec &a, const struct timespec &b) {
    if (a.tv_sec != b.tv_sec) {
        return a.tv_sec < b.tv_sec;
    }

    return a.tv_nsec < b.tv_nsec;
}
