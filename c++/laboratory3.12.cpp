//Ganenco Dmitri Lab 3.12
#include <stdio.h>

int main() {
    int code = 128; // Primul cod ASCII extins

    while (code <= 255) { // Ultimul cod ASCII extins
        printf("%d\t", code); // Afiseaza codul
        putchar(code); // Afisarea caracterului corespunzator
        printf("\n"); // Trece la urmatoarea linie
        code++; // Incrementam codul pentru urmatorul caracter
    }

    return 0;
}
