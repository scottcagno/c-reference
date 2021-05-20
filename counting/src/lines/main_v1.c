#include <stdio.h>

/*
    file: main_v1.c
    to compile: `gcc -o main_v1 main_v1.c`
    to run after compile (linux): `./main_v1`
    to run after compile (windows): `main_v1.exe`
    description: this program counts lines from input
*/

void main() {

    int c, nl;

    nl = 0;
    printf("enter data, press ctrl-d to signal EOF.\n");
    while((c = getchar()) != EOF)
        if(c == '\n')
            ++nl;
    printf("counted %d lines\n", nl);
}
