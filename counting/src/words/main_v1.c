#include <stdio.h>

/*
    file: main_v1.c
    to compile: `gcc -o main_v1 main_v1.c`
    to run after compile (linux): `./main_v1`
    to run after compile (windows): `main_v1.exe`
    description: this program counts words, lines and characters from input
*/

#define IN   1  // inside a word
#define OUT  0  // outside a word

void main() {

    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    printf("enter data, press ctrl-d to signal EOF.\n");
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("counted %d lines, %d words, and %d characters\n", nl, nw, nc);
}
