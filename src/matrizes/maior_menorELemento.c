#include <stdio.h>

// exibição de matriz
int main(void){
    int matriz[4][5], somaDiag = 0, somaDiagSecun = 0;
    int linha = 4;
    int colunas = 5;
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

    // soma diagonal primaria
    for (int i = 0; i < linha; i++){
        somaDiag += matriz[i][i];        
    }

    // soma diagonal secundaria
    for (int i = 0; i < linha; i++){
        somaDiagSecun += matriz[i][linha - 1 - i];
    }

    printf("soma da diagonal primaria: %d\n", somaDiag);
    printf("soma diagonal secundaria: %d", somaDiagSecun);

    
}
