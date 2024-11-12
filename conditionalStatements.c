// Estruturas condicionais encadeadas
// É quando uma estrutura de decisão está localizada dentro do lado falso da outra.
// Cuidar da identação do código
#include<stdio.h>

int main (void) {

    int num = 1;

    if(num >= 0) {
        if(num % 2 == 0) {
            printf("It's even\n");
        } else {
            printf("It's odd\n");
        }
    } else if (num < -5) {
        printf("Nearby 0\n");
    } else {
        printf("Negative number\n");
    }

    // Estrutura Switch-case
    // Estrutura de seleção de casos
    // Avalia sucessivamente o valor de uma expressão em relação a uma lista de constantes inteiras ou caracteres (listas de "casos"). Quando o valor é encontrado nesta lista de "casos", o comando correpondente é executado.
    // Se nenhum dos valores for encontrado, o comando defaukt será executado.
    // Os comandos de um case são executados até que o comando break seja encontrado.

    int day = 3;
    switch (day) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;

        default:
            printf("Not found!");
    }

    return 0;
}

