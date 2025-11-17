
#include "library.h"



// This should clear the screen
void clear_screen() {
    printf("\033[2J\03[H");
}


int ANSI_COLORS[] = {30, 31, 32, 33, 34, 35, 36, 37};
int ANSI_BG_COLORS[] = {40, 41, 42, 43, 44, 45, 46, 47};

// Changes the color of the text that will be displayed
void set_color(Color foreground, Color background) {
    printf("\033[%d;%dm", ANSI_COLORS[foreground], ANSI_BG_COLORS[background]);
}

// Test function. REMOVE!
int main() {
    clear_screen();
    set_color(RED, WHITE);
    printf("This should be in red.");
}