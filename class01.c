// Bibliotecas contém conjunto de funções e instruções previamente estabelecidas e que podem ser usadas pelo programa
#include<stdio.h>

// void inputAndOutput(void) {
//     scanf("tipo de dado", "endereço da variável"); // Leitura de dados
//     // Exemplo:
//     scanf("%d", &x); // & indica um endereço e x é a variável que receberá o valor
//     scanf("%d %d", &x, &y); // O primeiro valor antes do espaço vai para o x e o após vai para y

//     // Exemplo:
//     // printf("texto", "lista de variáveis/argumentos"); // Saída de dados
//     printf("Resultado = %d", x);
//     printf("Raízes são %f e %f", x, y);
// }

int main (void) {
    // a execução do programa inicia-se pela função main
    char x[50];

    printf("Olá Mundo");
    // inputAndOutput();
    printf("Qual seu nome? ");
    scanf("%s", &x);
    printf("Prazer te conhecer, x = %s", x);
    // system("pouse");

    return 0; // Indica o fim da execução da função
}
