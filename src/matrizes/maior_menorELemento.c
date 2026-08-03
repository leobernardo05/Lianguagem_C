#include <stdio.h>

int main(void)
{
    int matriz[4][5];

    // Leitura da matriz
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Digite o elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Inicializa com o primeiro elemento
    int maior = matriz[0][0];
    int menor = matriz[0][0];

    int linhaMaior = 0, colunaMaior = 0;
    int linhaMenor = 0, colunaMenor = 0;

    // Procura maior e menor
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }

            if (matriz[i][j] < menor)
            {
                menor = matriz[i][j];
                linhaMenor = i;
                colunaMenor = j;
            }
        }
    }

    printf("\nMaior valor: %d - linha %d, coluna %d\n",
           maior, linhaMaior + 1, colunaMaior + 1);

    printf("Menor valor: %d - linha %d, coluna %d\n",
           menor, linhaMenor + 1, colunaMenor + 1);

    return 0;
}