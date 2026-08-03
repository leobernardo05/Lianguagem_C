#include <stdio.h>

// exibição de matriz
int main(void){
    int matriz[2][3] = {
        {2,4,6},
        {1,3,5}
    };

    int linha = 2;
    int colunas = 3;
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < colunas; j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
    
}
