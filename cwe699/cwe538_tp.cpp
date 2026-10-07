#include <iostream>
#include <cstdlib>
void debug() { std::cout << std::getenv("API_TOKEN") << "\n"; } /* CWE-538 */
