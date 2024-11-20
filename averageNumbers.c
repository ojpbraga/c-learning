int main() {
    int num, sumNums = 0;

    while(1) {

        printf("De um numero (ou 0 para sair): ");
        scanf("%d", &num);

        if(num == 0) {
            break;
        } else if (num < 0) {
            printf("Numero menor ou igual a 0 nao e valido! Tente novamente...");
            continue;
        }

        sumNums += num;
    }
    printf("A soma dos numero e: %d", sumNums);

    return 0;
}