#include <string.h>
// For
// É utilizado para iterar uma instrução por um número pré-definido de vezes.
// Diferença entre o for e o while: 
// Na primeira linha do for, já é possível entender como ele atuará, tendo uma ideia de quantas vezes será executado.
// O whilw não possui essa referência, ou seja, situação que não sabemos quantas vezes serão repetidas.

int main (void) {
    
    // for (int i = 0; i >= 10; i++) {
        
    // }

    // Operador de vírgula no comando for
    // O operador vírgula é um separador de comandos.
    // Ele permite determinar uma lista de expressões que devem ser executadas sequencialmente.
 
    // for (int i = 10, j = 100; i < j, i++, j--;) {
    //     printf("i = %d and j = %d\n", i, j);
    // }

    // Exercise
    int x, z;
    long int resultNum = 1;
   
    printf("Give a number: ");
    scanf("%d", &x);
    printf("Give a number: ");
    scanf("%d", &z);

    for(int c = 0; c < z; c++) {
        resultNum = resultNum * x;
    }
    printf("Result: %d", resultNum);


    return 0;
}

