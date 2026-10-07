#include <fstream>
#include <unistd.h>
void write_cfg(const char *path, const char *data) {
  if (access(path, W_OK) == 0) std::ofstream(path) << data; /* CWE-367 */
}
