// Filename:        fahrc.c
// Author:          Joseph DeVictoria (Thanks K&R)
// Creation Date:   2 September 2016
// Purpose:         Modify K&R F to C to count down instead of up.

#include <stdio.h>

// Print Fahrenheit-Celsius table in reverse order.

main() {
    int fahr;
    printf("Fahrenheit Celsius\n");
    for (fahr = 300; fahr >= 0; fahr-=20) {
        printf("%10d %7.1f\n", fahr, (5.0/9.0)*(fahr-32.0));
    }
}
