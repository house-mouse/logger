
#define MINIMUM_LOG_LEVEL 1
#include "logger.hpp"

int main(int argc, const char *argv[]) {

    log_info("This is some information for " << argv[0]);

return 0;
}

