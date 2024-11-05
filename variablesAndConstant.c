// Variáveis
// Pode ser definida como uma localização temporária na memória onde um valor pode ser armazenado e utilizado por um programa.
// Esta localização na memória é identificada por meio de endereços de memória

// colocamos o & utilizando o scanf para representar aquele endereço de memória, ou seja, o endereço de memória que é aquela variável.

// Tipos
// int, float, chart e bool


// Contantes
// Refere-se a um valor que permance inalterado ao longo do programa.
// Em c, existem duas formas de criar valores constantes:
// #define nome_da_constante valor;
// const int nome_da_constante;

#include <stdio.h>
// Se for usar define, precisa ser antes da função main
#define varconst 100;

int main() {
    int x;
    x = varconst
    printf("Constante: %i", x);

    return 0;
}