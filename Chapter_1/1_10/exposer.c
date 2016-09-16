// Filename:        exposer.c
// Author:          Joseph DeVictoria (Thanks K&R)
// Creation Date:   15 September 2016
// Purpose:         Read in a line, and replace any tabs, backspace or \\ with their actual characters.

#include <stdio.h>

int main() {
    int c;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');
            putchar('t');
        }
        else if (c == '\b') {
            putchar('\\');
            putchar('b');
        }
        else if (c == '\\') {
            putchar('\\');
            putchar('\\');
        }
        else {
            putchar(c);
        }
    }
}
