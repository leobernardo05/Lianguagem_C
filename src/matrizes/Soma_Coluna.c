#include <stdio.h>

// exibição de matriz
int main(void){
    int matriz[3][4], soma = 0, somaLinha = 0;
    int linha = 3;
    int colunas = 4;
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < colunas; j++){
            printf("Digite um numero para a linha %d e a colunas %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }

    for (int j = 0; j < linha; j++){
        soma = 0;
        for (int i = 0; i < colunas; i++){
            soma += matriz[i][j];
        }
        printf("soma da da coluna %d: %d\n", j+1, soma);
    }


    
}
