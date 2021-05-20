#include <stdio.h>

/*
    file: main_v1.c
    to compile: `gcc -o main_v1 main_v1.c`
    to run after compile (linux): `./main_v1`
    to run after compile (windows): `main_v1.exe`
    description: this program prints a fahrenheit to celsius table
*/

void main() {

    float fahr, celsius;
    int lower, upper, step;

    lower = 0;          // lower limit of temperature table
    upper = 300;        // upper limit
    step = 20;          // step size

    fahr = lower;
    while(fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr-32.0); // lets do some math
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

}
