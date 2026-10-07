#include <cstdlib>
#include <ctime>
int token() { std::srand(std::time(nullptr)); return std::rand(); } /* CWE-335 */
