#include <stdio.h>

// exibição de matriz
int main(void){
    int matriz[2][3], SegMatriz[3][2];

    // preenchendo matriz
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("Digite um numero para a linha %d e a colunas %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }

    // preenchendo segunda matriz
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            printf("Digite um numero para a linha %d e a colunas %d: ", i, j);
            scanf("%d ", &SegMatriz[i][j]);
        }
        printf("\n");
    }

    int resultado[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {

            resultado[i][j] = 0;

            for (int k = 0; k < 3; k++) {
                resultado[i][j] += matriz[i][k] * SegMatriz[k][j];
            }
        }
    }

    printf("\nMatriz Resultado:\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }
    
}
