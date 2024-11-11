// Operadores
// Podemos utilizar operadores aritméticos, relacionais e lógicos.
// Atenção a ordem de procedência.
// (), ++ --, * / %, + -, < <= ==...

// Operadores Unários
// Incremento (++) e decremento (--)
// Aumentam "um" valor da variável
// ++x (pré incremento): soma +1 ANTES de utilizar seu valor
// x++ (pós incremento): soma +1 DEPOIS de utilizar seu valor
// --X e x--: subtraí -1 ANTES/DEPOIS de utilizar seu valor
#include <stdio.h>

int main(){

    int x, y;

    x = 10; y = x++;

    printf("y = x++ : valor de y => %d\n", y);

    printf("y = x++ : valor de x => %d\n\n", x);

    x = 10; y = x--;

    printf("y = x-- : valor de y => %d\n", y);

    printf("y = x-- : valor de x => %d\n\n", x);

    x = 10; y = ++x;

    printf("y = ++x : valor de y => %d\n", y);

    printf("y = ++x : valor de x => %d\n\n", x);

    x = 10; y = --x;

    printf("y = --x : valor de y => %d\n", y);

    printf("y = --x : valor de x => %d\n\n", x);

    return 0;

}