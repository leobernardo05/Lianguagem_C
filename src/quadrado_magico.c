#include <stdio.h>

// quadrado magico de uma matriz
int main(void){
    int qtd, soma, somaPerfeita;
    int quadrado = 1;
    printf("Digite o tamanho da sua matriz: ");
    scanf("%d", &qtd);
    // tamanho da matriz
    int matriz[qtd][qtd];

    // for para preencher a matriz
    for (int i = 0; i < qtd; i++){
        for (int j = 0; j < qtd; j++){
            printf("Digite um numero para a linha %d e para a coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    // escolhendo um elemento da matriz para declarar a soma perfeita;
    for (int i = 0; i < qtd; i++){
        somaPerfeita += matriz[0][i]; 
    }
         

    // for calculando linhas 
    for(int i = 0;i < qtd;i++){
        for (int j = 0; j < qtd; j++){
                soma = matriz[i][j]; 
            }
        if (soma != somaPerfeita){
            quadrado = 0;
        }
        
    }  
    // calculando colunas
    for(int i = 0;i < qtd;i++){
        for (int j = 0; j < qtd; j++){
            soma = matriz[j][i]; 
        }
        if (soma != somaPerfeita){
            quadrado = 0;
        }
        
    }
    
    // calculando diagonais
    for(int i = 0;i < qtd;i++){
        for (int j = 0; j < qtd; j++){
            soma += matriz[i][i]; 
        }
        if (soma != somaPerfeita){
            quadrado = 0;
        }
    }

    // calculando diagonal inversa
    for(int i = 0;i < qtd;i++){
        for (int j = 0; j < qtd; j++){
            soma += matriz[i][qtd - 1 - i];
        }
        if (soma != somaPerfeita){
            quadrado = 0;
        }
    }

    // exibindo o resultado
    if (quadrado == 1){
        printf("É um quadrado magico\n");
    } else {
        printf("Não é um quadrado magico\n");
    }
}
