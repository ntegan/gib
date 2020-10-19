#include "console.h"

#define CONSOLE_TERMINAL_CLEAR_STRING "\e[1;1H\e[2J"

// void console_clear_console() { g_print("%s", CONSOLE_TERMINAL_CLEAR_STRING);
// }
void console_clear_console() {}
void console_print_ps_one() { g_print("gib> "); }
GString *console_input_a_string() {
  GString *the_string = g_string_new(NULL);
  gchar *add_string = (gchar *)"YEET STRING\n";
  g_string_append(the_string, add_string);
}

void console_init_console() {
  console_print_ps_one();
  g_usleep(900000);
  console_clear_console();

  GString *input = console_input_a_string();
  g_print("%s\n", input);
  g_string_free(input, TRUE);
}
