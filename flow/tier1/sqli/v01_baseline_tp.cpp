#include <string>
#include <sqlite3.h>
int main(int argc, char **argv) {
  sqlite3 *db = 0;
  sqlite3_open("/var/app/app.db", &db);
  std::string q = std::string("SELECT * FROM u WHERE id='") + argv[1] + "'";
  sqlite3_exec(db, q.c_str(), 0, 0, 0); /* SINK CWE-89 */
  return 0;
}
