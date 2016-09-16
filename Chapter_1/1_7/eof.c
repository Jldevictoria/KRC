// Filename:        eof.c
// Author:          Joseph DeVictoria (Thanks K&R)
// Creation Date:   15 September 2016
// Purpose:         Print the value of EOF.

#include <stdio.h>

int main() {
    int c = EOF;
    printf("%x\n", c);
    if (c == -1) {
        putchar('-');
        putchar('1');
        putchar('\n');
    }
}
