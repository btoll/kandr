#include <stdio.h>

#define     LOWER   0       /* lower limit of table */
#define     UPPER   300     /* upper limit */
#define     STEP    20      /* step size */

float convert_to_celsius(int fahr) {
    return (5.0 / 9.0) * (fahr - 32);
}

/* print Fahrenheit-Celsius table */
int main() {
    int fahr = UPPER;

    for (; fahr >= LOWER; fahr -= STEP)
        printf("%3d\t%6.1f\n", fahr, convert_to_celsius(fahr));
}

