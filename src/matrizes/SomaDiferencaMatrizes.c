#include <stdio.h>

// exibição de matriz
int main(void){
    int matriz1[3][3], matriz2[3][3], soma[3][3], subtracao[3][3];
    int linha = 3;
    int colunas = 3;
    // preenchendo matriz
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < colunas; j++){
            printf("Digite um numero para a linha %d e a colunas %d: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < linha; i++){
        for (int j = 0; j < colunas; j++){
            printf("Digite um numero para a linha %d e a colunas %d: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
        printf("\n");
    }

    // exibição matriz1
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < colunas; j++){
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    // exibição matriz2
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < colunas; j++){
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

    // matriz soma
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < colunas; j++){
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
        printf("\n");
    }
    printf("exibição soma: \n");
    // matriz soma
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < colunas; j++){
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }

    // matriz subtração
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < colunas; j++){
            subtracao[i][j] = matriz1[i][j] - matriz2[i][j];
        }
        printf("\n");
    }
    printf("exibição subtração: \n");
    // matriz subtração
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < colunas; j++){
            printf("%d ", subtracao[i][j]);
        }
        printf("\n");
    }
    

    
}
