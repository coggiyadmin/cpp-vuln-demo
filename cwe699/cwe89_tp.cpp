#include <string>
#include <sqlite3.h>
void lookup(sqlite3 *db, const char *id) {
  std::string q = std::string("SELECT * FROM u WHERE id='") + id + "'";
  sqlite3_exec(db, q.c_str(), 0, 0, 0); /* SINK CWE-89 */
}
