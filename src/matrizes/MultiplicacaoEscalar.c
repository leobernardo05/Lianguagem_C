#include <stdio.h>

// exibição de matriz
int main(void){
    int matriz[3][3], valor;
    int linha = 3;
    int colunas = 3;
    // preenchendo matriz
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < colunas; j++){
            printf("Digite um numero para a linha %d e a colunas %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }

    // exibição matriz
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < colunas; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }


    printf("Digite o escalar:\n");
    scanf("%d", &valor);
    // exibição matriz
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < colunas; j++){
            matriz[i][j] = valor * matriz[i][j]; 
        }
        printf("\n");
    }

    // exibição matriz
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < colunas; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    
}
