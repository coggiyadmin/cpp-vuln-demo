#include <cstdlib>
const char *dsn() { return std::getenv("DB_PASSWORD"); }
