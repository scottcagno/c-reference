#include <stdio.h>

/*
    file: main_v1.c
    to compile: `gcc -o main_v1 main_v1.c`
    to run after compile (linux): `./main_v1`
    to run after compile (windows): `main_v1.exe`
    description: this program copies input to output
*/

void main() {
    int c;
    printf("copying input to output, use ctrl-c to exit\n")
    c = getchar();
    while(c != EOF) {
        putchar(c);
        c = getchar();
    }
}