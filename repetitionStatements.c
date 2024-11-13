#include <stdio.h>

int main() {

    int x = 0;
    while (x <= 10) {
        printf("2 x %d = %d\n", x, 2*x);
        ++x;
    }

    // do-while
    // Avalia a condição no final do ciclo, ou seja, primeiro ele executa e só depois verifica a condição.

    x = 0;
    do {
        printf("4 x %d = %d\n", x, 2*x); // Primeiro ele faz isso
        ++x;
    } while (x <= 10); // Só depois verifica
    

    return 0;
}