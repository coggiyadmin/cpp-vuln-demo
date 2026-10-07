#include <sqlite3.h>
void lookup(sqlite3 *db) {
  sqlite3_stmt *st = 0;
  sqlite3_prepare_v2(db, "SELECT * FROM u WHERE id=?", -1, &st, 0);
}
