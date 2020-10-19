#include <glib.h>

#include "console.h"

void print_entry_message(gint argc) {
  g_print("+\tRunning gibmain with %d args\n", argc);
  g_print("+\tglib version: %d.%d\n", GLIB_MAJOR_VERSION, GLIB_MINOR_VERSION);
}

gint main(gint argc, gchar **argv) {
  print_entry_message(argc);
  g_usleep(900000);
  // console_init_console();

  return 0;
}
