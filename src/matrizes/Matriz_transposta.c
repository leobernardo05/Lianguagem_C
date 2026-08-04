#include <stdio.h>

// exibição de matriz
int main(void){
    int matriz[2][3], matrizTransposta[3][2];
    int linha = 2;
    int colunas = 3;
    // preenchendo matriz
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < colunas; j++){
            printf("Digite um numero para a linha %d e a colunas %d: ", i, j);
            scanf("%d ", &matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < linha; i++){
        for (int j = 0; j < colunas; j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

    // preechendo matriz transposta
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < colunas; j++){
            matrizTransposta[j][i] = matriz[i][j];
        }
        printf("\n");
    }

    // exibição matriz transposta
    for (int i = 0; i < colunas; i++){
        for (int j = 0; j < linha; j++){
            printf("%d ",matrizTransposta[i][j]);
        }
        printf("\n");
    }

    
}
