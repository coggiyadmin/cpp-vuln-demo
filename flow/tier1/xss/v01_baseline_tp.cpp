#include <iostream>
#include <string>
int main(int argc, char **argv) {
  std::cout << "<div>" << argv[1] << "</div>\n"; /* SINK CWE-79 */
  return 0;
}
