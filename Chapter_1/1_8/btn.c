// Filename:        btn.c
// Author:          Joseph DeVictoria (Thanks K&R)
// Creation Date:   15 September 2016
// Purpose:         Count blanks, tabs, and newlines.

#include <stdio.h>

int main() {
    int c;
    int blanks = 0;
    int tabs = 0;
    int newlines = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            blanks++;
        }
        else if (c == '\t') {
            tabs++;
        }
        else if (c == '\n') {
            newlines++;
        }
        printf("Blanks: %d, Tabs: %d, Newlines: %d.\n", blanks, tabs, newlines);
    }
}
