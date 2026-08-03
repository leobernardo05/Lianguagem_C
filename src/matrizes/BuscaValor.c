#include <stdio.h>

// exibição de matriz
int main(void){
    int matriz[4][4], valor, qtdLinha = 0, qtdColuna = 0, total = 0, valorEncontrado = 0;
    int linha = 4;
    int colunas = 4;
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

    printf("valor procurado: ");
    scanf("%d", &valor);
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < colunas; j++){
            if (matriz[i][j] == valor){
                qtdLinha = i;
                qtdColuna = j;
                total++;
                valorEncontrado = 1;
            }
        }
    }

    if(valorEncontrado == 1){
        printf("valor procurado: %d\nEncontrado na linha %d, coluna %d\nTotal de ocorrencias: %d", valor, qtdLinha, qtdColuna, total);
    } else {
        printf("valor não pertence a matriz\n");
    }

   
}
