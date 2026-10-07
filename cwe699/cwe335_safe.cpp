#include <fstream>
int token() { std::ifstream in("/dev/urandom"); int x = 0; in.read(reinterpret_cast<char *>(&x), sizeof(x)); return x; }
