#include <stdio.h>

/*
    file: main_v2.c
    to compile: `gcc -o main_v2 main_v2.c`
    to run after compile (linux): `./main_v2`
    to run after compile (windows): `main_v2.exe`
    description: this program prints a fahrenheit to celsius table
*/

#define LOWER 0
#define UPPER 300
#define STEP  20

void main() {

    int fahr;

    // brackets are NOT required with for, while, if, etc. as
    // long as the statement "inside" it is no more than one line.

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr-32.0));
}
