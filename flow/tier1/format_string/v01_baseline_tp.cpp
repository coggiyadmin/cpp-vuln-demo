#include <cstdio>
int main(int argc, char **argv) {
  std::printf(argv[1]); /* SINK CWE-134 */
  return 0;
}
