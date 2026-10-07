#include <fstream>
void write_cfg(const char *data) { std::ofstream("/var/app/cfg.txt") << data; }
