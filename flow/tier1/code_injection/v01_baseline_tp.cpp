#include <cstdlib>
#include <string>
int main(int argc, char **argv) {
  std::system((std::string("sh -c ") + argv[1]).c_str()); /* SINK CWE-94 */
  return 0;
}
