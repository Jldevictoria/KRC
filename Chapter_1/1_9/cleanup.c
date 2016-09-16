// Filename:        cleanup.c
// Author:          Joseph DeVictoria (Thanks K&R)
// Creation Date:   15 September 2016
// Purpose:         Read in a line, and replace any 2+ spaces with a single space!

#include <stdio.h>

int main() {
    int c1;
    int c2;
    while ((c1 = getchar()) != EOF) {
        while (c1 == ' ') {
            c2 = getchar();
            if (c2 != ' ') {
                putchar(' ');
                c1 = c2;
            }
        }
        putchar(c1);
    }
}
