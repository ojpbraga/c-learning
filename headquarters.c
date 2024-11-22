int main() {
    // Cada linha de uma matriz é um vetor-linho de n números e a matriz é um vetor de m vetores-linha
    // int m[0][0] = 0;
    // int m[0][1] = 1;
    // int m[0][2] = 2;
    // int m[0][3] = 3;
    // int m[1][0] = 0;
    // int m[1][1] = 1;
    // int m[1][2] = 2;
    // int m[1][3] = 3;

    // Sintaxe: tipo nome_matriz[linha][coluna];
    int values[3][2] = {{2, 3}, {5, 7}, {11, 4}};
    // int values[][2] = {{2, 3}, {5, 7}, {11, 4}};
    // int values[][] = {{2, 3}, {5, 7}, {11, 4}}; invalido

    // Uma matriz possui dois indices, precisamos de dois lacos para percorrer

    int mat[4][3];
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 3; j++) {
            printf("mat[%d][%d]: %d\n", i, j, mat[i][j]);
            // scanf("%d", &mat[i][j]);
        }
    }

    // Exercicio
    // 1 0 0
    // 0 1 0
    // 0 0 1

    int e[3][3];
    for(int r = 0; r < 3; r++){
        printf("\n");
        for(int s = 0; s < 3; s++) {
            if(r == s) {
                e[r][s] = 1;
            } else {
                e[r][s] = 0;
            }
            printf("%d ", e[r][s]);
        }
    }

}