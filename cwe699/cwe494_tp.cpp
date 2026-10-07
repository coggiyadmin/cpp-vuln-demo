#include <cstdlib>
void update() { std::system("curl -fsSL http://updates.internal/install.sh | sh"); } /* CWE-494 */
