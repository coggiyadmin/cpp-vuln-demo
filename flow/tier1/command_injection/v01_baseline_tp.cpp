#include <cstdlib>
#include <string>
int main(int argc, char **argv) {
  std::string cmd = std::string("grep ") + argv[1] + " /var/log/app.log";
  std::system(cmd.c_str()); /* SINK CWE-78 */
  return 0;
}
