#include <stdio.h>

// exibição de matriz
int main(void){
    int matriz[3][4], qtdPos = 0, qtdNegativo = 0, qtdZero = 0;
    int linha = 3;
    int colunas = 4;
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < colunas; j++){
            printf("Digite um numero para a linha %d e a colunas %d: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > 0){
                qtdPos++;
            } else if (matriz[i][j] < 0){
                qtdNegativo++;
            } else {
                qtdZero++;
            }
        }
        printf("\n");
    }

    for (int i = 0; i < linha; i++){
        for (int j = 0; j < colunas; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Quantidade de positivos, é: %d\n", qtdPos);
    printf("Quantidade de negativos, é: %d\n", qtdNegativo);
    printf("Quantidade nulo, é: %d\n", qtdZero);
    
}
