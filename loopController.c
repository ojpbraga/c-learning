// Break vs Continue
// break: encerra o fluxo de execução de um laço ou de um switch.
// Faz com que a execução do programa continue na primeira linha seguinte ao laço interrompido.

// continue: interrompe apenas a repetição (iteração) corrente.
// E passa para a próxima repetição do laço, se ela existir.

// Comando goto
// Salto condicional para um local especificado por uma palavra-chave no código
//  destino:
//  ...
//  goto destino;
// "destino" é uma palavra definida pelo programador.
// Esse local pode ser à frente ou atrás no programa, mas deve ser dentro da mesma função.
// Não é tão utilizado e não é necessário.

int main() {
    
    printf("Using BREAK\n");
    for(int c = 1; c <= 20; c++) {
        if(c % 10 == 0) {
            break;
        }
        printf("%d, ", c);
    }

    printf("\n\nUsing FOR\n");
    for(int i = 1; i <= 20; i++) {
        if(i % 10 == 0) {
            continue;
        }
        printf("%d, ", i);
    }

    int age, sum = 0, cunt = 0;
    while (1) {
        printf("Your age (0 to stop): ");
        scanf("%d", &age);

        if(age == 0) {
            break;
        }

        if(age < 0) {
            printf("Negative age not exist! Try again...\n");
            continue;
        }

        // Caso continue, ele não pula, ele volta para o while
        sum += age;
        cunt++;
    }
    if(cunt > 0) {
        printf("The average age: %.2f", ((float) sum/cunt));
    } else {
        printf("Any age was given");
    }

    return 0;
}