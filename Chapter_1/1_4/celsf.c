// Filename:        celsf.c
// Author:          Joseph DeVictoria (Thanks K&R)
// Creation Date:   2 September 2016
// Purpose:         Modify K&R F to C converter to give inverse table.

#include <stdio.h>

// Print Celsius-Fahrenheit table
// for celsius = 0, 20, ..., 300; floating point version.

main() {
    float celsius;
    float fahr;
    int lower = 0;
    int upper = 300;
    int step = 20;

    printf("Celsius Fahrenheit\n");
    celsius = lower;
    while (celsius <= upper) {
        fahr = (celsius / (5.0/9.0)) + 32;
        printf("%7.0f %9.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
