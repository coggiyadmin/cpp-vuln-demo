#include <fstream>
#include <string>
int main(int argc, char **argv) {
  std::ifstream in(std::string("/var/app/data/") + argv[1]); /* SINK CWE-22 */
  return in ? 0 : 1;
}
