int main() {
    int i;

    do {
        printf("\n\nEscolha a fruta: \n\n");
        printf(" 1 - Mamão\n");
        printf(" 2 - Abacaxi\n");
        printf(" 3 - Laranja\n");
        scanf("%d", &i);
    } while ((i<1)||(i>3));

    switch (i){
        case 1:
            printf("Mamão\n");
            break;
        case 2:
            printf("Abacaxi\n");
            break;
        case 3:
            printf("Laranja\n");
            break;
    }
    

    return 0;
}