#include <fstream>
#include <string>
void readf(const char *name) { std::ifstream in(std::string("/var/app/") + name); } /* SINK CWE-22 */
