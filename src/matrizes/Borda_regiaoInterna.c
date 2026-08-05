#include <stdio.h>

// exibição de matriz
int main(void){
    int matriz[5][5], somaBorda = 0, somaInt = 0, somaTotal = 0;
    int linha = 5;
    int colunas = 5;

    // preenchendo matriz
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < colunas; j++){
            printf("Digite um numero para a linha %d e a colunas %d: ", i, j);
            scanf("%d ", &matriz[i][j]);
        }
        printf("\n");
    }

    // exibição
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < colunas; j++){
            printf("%d ",matriz[i][j]);
        }
    }
    printf("\n");
    //soma total
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < colunas; j++){
            somaTotal += matriz[i][j];
        }
        printf("\n");
    }

    // soma borda
    for (int i = 1; i < linha; i++){
        for (int j = 1; j < colunas; j++){
            if (i == 0 || i == linha - 1 || j == 0 || j == colunas - 1){
                somaBorda += matriz[i][j];
            }
        
        }
        printf("\n");
    }

    // soma interna
    somaInt = somaTotal - somaBorda;

    printf("Soma total = %d\n", somaTotal);
    printf("Soma interna = %d\n", somaInt);
    printf("Soma borda = %d\n", somaBorda);


    
}
