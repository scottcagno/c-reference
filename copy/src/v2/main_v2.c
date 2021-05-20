#include <stdio.h>

/*
    file: main_v2.c
    to compile: `gcc -o main_v2 main_v2.c`
    to run after compile (linux): `./main_v2`
    to run after compile (windows): `main_v2.exe`
    description: this program copies input to output
*/

void main() {
    int c;

    while((c = getchar()) != EOF)
        putchar(c);
}