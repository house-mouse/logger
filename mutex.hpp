#ifndef __AMUTEX_HPP__
#define __AMUTEX_HPP__

#include <mutex>

typedef std::mutex Mutex;
typedef const std::lock_guard<std::mutex> ScopedMutexLock;

#endif // __AMUTEX_HPP__
