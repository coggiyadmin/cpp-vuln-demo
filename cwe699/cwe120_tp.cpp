#include <cstring>
void copy(const char *src) { char buf[16]; std::strcpy(buf, src); } /* SINK CWE-120 */
