// include <stdio.h>

// Protótipo
void showMenu();
void runOption(int value);

int main() {
    int value;

    do{
        showMenu();
        scanf("%d", &value);
        runOption(value);

    } while (value != 0);

    return 0;
    
}

void showMenu() {
    printf("Menu\n");
    printf("1. Tarefa 1\n");
    printf("2. Tarefa 2\n");
    printf("3. Tarefa 3\n");
    printf("0. Sair\n");
    printf("Escolha uma opção: ");
}

void runOption(int value){
    switch (value)
    {
    case 1:
        printf("Realizando Tarefa 1...\n\n");
        break;

    case 2:
        printf("Realizando Tarefa 2...\n\n");
        break;

    case 3:
        printf("Realizando Tarefa 3...\n\n");
        break;
    
    }
    
}