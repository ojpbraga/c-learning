// Ponteiros
// Utilizados para fazer manipulação direta de endereços de memória
// * usado para declarar o ponteiro
// & utilizado para acessar o endereço de memória

int main() {
    int *age; // significa que age não vai armazenar um inteiro, mas sim um endereço de memória

    int *ptr;
    int value = 10;

    ptr = &value; // Ponteiros só aceitam endereços de memória. Portanto, com ele conseguimos atribuir o endereço de memória de uma variável a um ponteiro.
    
    printf("Address = %x\n", &value); // O endereço da memória é em hexadecimal
    printf("Address = %x\n", ptr);
    printf("Value = %d\n", *ptr); // * está acessando o valor do endereço de memória


    // Ponteiro para vetores
    // O nome de um vetor corresponde ao endereço do seu primeiro elemento, isto é, se v for um vetor v == &v[0].
    int v[3] = {10, 20, 30, 40, 50};
    int *ptrNumbers;

    ptrNumbers = v; // primeiro elemento do vetor
    // ou
    ptrNumbers = &v[0];


    // Observações
    // Não se deve fazer cargas iniciais de objetos apontados por um ponteiro que ainda não tenha sido iniciado
    int *p; // Objeto com lixo
    *p = 100; // Coloca o valor 100 no local para onde p aponta que será qualquer lugar na memória

    // Por segurança, inicie sempre seus ponteiros. Se não souber para onde, incie-os com NULL
    int *p = NULL;

    return 0;
}