// Filename:        eof.c
// Author:          Joseph DeVictoria (Thanks K&R)
// Creation Date:   15 September 2016
// Purpose:         Verify that (getchar() != EOF) = 0 or 1.

#include <stdio.h>

int main() {
    int c;
    while (c = getchar() != EOF) {
        if (c == 1) {
            putchar('1');
        }
        else if (c == 0) {
            putchar('0');
        }
        else {
            putchar(c);
        }
    }
}
