#include <stdio.h>

typedef enum {
    BLACK = 0,
    RED,
    GREEN,
    YELLOW,
    BLUE,
    MAGENTA,
    CYAN,
    WHITE
} Color;

int count(const char *str);

void clear_screen();

void set_color(Color foreground, Color background);