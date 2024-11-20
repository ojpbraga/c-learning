// Vetores, o que são?
// É uma série de variáveis indexadas que podem ser acessadas por meio de um índice inteiro.
// Por exemplo: vetor[5]
// Um vetor só guarda variáveis do mesmo tipo.
#include<stdio.h>
int main(){
    // int list[5];
    // float wages[3];
    // char name[30]; // 1 é 1 caracter, ou seja, a string em C é de fato uma array de strings, sendo uma variavel do tipo string (variavel, não vetor) cabe apenas 1 caracter dentro

    // Exemplo de declaração:
    // int v[10]; // lixo: resquicios de outros programas que ficaram na memória
    // int v[3] = {3, 10, 1};
    // int v[0] = {3, 10, 1}; // tamanho 3
    // int v [10] = {5, 10, 40}; // restante é preenchido com 0
    // int v[]; provoca erro de compilação

    int i = 0, num[5];

    for(i = 0; i < 5; i++) {
        printf("Digite a posicao %d: ", i);
        scanf("%d", &num[i]);
    }

    for(i = 4; i >= 0; i--) {
        printf("%d ", num[i]);
    }

    printf("\n\n\n ");

    return 0;
}