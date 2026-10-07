#include <sqlite3.h>
int main() {
  sqlite3 *db = 0; sqlite3_stmt *st = 0;
  sqlite3_open("/var/app/app.db", &db);
  sqlite3_prepare_v2(db, "SELECT * FROM u WHERE id=?", -1, &st, 0);
  sqlite3_bind_int(st, 1, 1);
  sqlite3_step(st);
  return 0;
}
