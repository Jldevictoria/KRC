// Filename:        fahrc.c
// Author:          Joseph DeVictoria (Thanks K&R)
// Creation Date:   31 August 2016
// Purpose:         Modify K&R F to C converter and give a heading to output.

#include <stdio.h>

// Print Gahrenheit-Celsius table
// for fahr = 0, 20, ..., 300; floating point version.

main() {
    float fahr;
    float celsius;
    int lower = 0;
    int upper = 300;
    int step = 20;

    printf("Fahrenheit Celsius\n");
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%10.0f %7.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
