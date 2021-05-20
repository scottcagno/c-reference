#include <stdio.h>

/*
    file: main_v2.c
    to compile: `gcc -o main_v2 main_v2.c`
    to run after compile (linux): `./main_v2`
    to run after compile (windows): `main_v2.exe`
    description: this program counts characters from input
*/

void main() {

    double nc;

    printf("enter data, press ctrl-d to signal EOF.\n");
    for (nc = 0; getchar() != '\n'; ++nc)
        ;
        ++nc;
    printf("counted %.0f characters\n", nc);
}
