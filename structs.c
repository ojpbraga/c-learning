
// Sctructs
// Com structs é possível contruir arrays com diferentes tipo de dados como string, number, boolean.
// Deve ser estruturado fora do main.
struct form {
    char name[50];
    int age;
    char street[30];
    int number;
};

// typedef informa que "formNew" será o nome de um novo tipo de dado
typedef struct structs {
    char name[50];
    int age;
    char street[30];
    int number;
} formNew;

int main() {

    struct form f1, f2, f3, f4;
    formNew fn1, fn2;
    
    // Acesso aos dados
    strcpy(f1.name, "Jonh");
    f1.age = 22;

    // Inserir dados pelo teclado
    fgets(fn1.street, 30, stdin);
    scanf("%d", &fn1.number);
    
    // Atribuição
    struct Point {
        int x;
        int y;
    };
    struct Point x;
    struct Point y = {1, 3};
    x = y;

    // Aninhamento
    struct adress {
        char street[50];
        int number;
    };
    struct registerPerson {
        char name[50];
        int age;
        struct structs adress end;
    };
    
    // Vetores
    struct form c[4];
    c[0].age = 19;
    

    return 0;
}