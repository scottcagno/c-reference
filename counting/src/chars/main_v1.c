#include <stdio.h>

/*
    file: main_v1.c
    to compile: `gcc -o main_v1 main_v1.c`
    to run after compile (linux): `./main_v1`
    to run after compile (windows): `main_v1.exe`
    description: this program counts characters from input
*/

void main() {

    long nc;
    nc = 0;
    printf("enter data, press ctrl-d to signal EOF.\n");
    while(getchar() != EOF)
        ++nc;
    printf("counted %ld characters\n", nc);
}
