#include <stdio.h>

#define TAM 8
#define MAX_TIROS 20
#define SEGMENTOS 6

void inicializarMatrizes(char frota[TAM][TAM], char tiros[TAM][TAM]);
void posicionarFrota(char frota[TAM][TAM]);
void mostrarTiros(char tiros[TAM][TAM]);
void mostrarFrota(char frota[TAM][TAM]);

int main() {

    char frota[TAM][TAM];
    char tiros[TAM][TAM];

    int acertos = 0;
    int tirosValidos = 0;
    int linha, coluna;

    inicializarMatrizes(frota, tiros);
    posicionarFrota(frota);

    while (acertos < SEGMENTOS && tirosValidos < MAX_TIROS) {

        printf("\n==============================\n");
        printf("Tiros restantes: %d\n", MAX_TIROS - tirosValidos);
        printf("Acertos: %d/%d\n\n", acertos, SEGMENTOS);

        mostrarTiros(tiros);

        printf("\nDigite a linha (1-8): ");
        scanf("%d", &linha);

        printf("Digite a coluna (1-8): ");
        scanf("%d", &coluna);

        linha--;
        coluna--;

        // valida coordenadas
        if (linha < 0 || linha >= TAM || coluna < 0 || coluna >= TAM) {
            printf("\nCoordenadas invalidas!\n");
            continue;
        }

        // verifica tiro repetido
        if (tiros[linha][coluna] != '.') {
            printf("\nVoce ja atirou nessa posicao!\n");
            continue;
        }

        tirosValidos++;

        if (frota[linha][coluna] == 'N') {

            tiros[linha][coluna] = 'X';
            acertos++;

            printf("\n>>> Acertou!\n");

        } else {

            tiros[linha][coluna] = 'O';

            printf("\n>>> Agua!\n");
        }

    }

    printf("\n==============================\n");

    if (acertos == SEGMENTOS)
        printf("PARABENS! Voce destruiu toda a frota!\n");
    else
        printf("Fim de jogo! Seus tiros acabaram.\n");

    printf("\nPosicao da frota:\n\n");
    mostrarFrota(frota);

    return 0;
}

void inicializarMatrizes(char frota[TAM][TAM], char tiros[TAM][TAM]) {

    for (int i = 0; i < TAM; i++) {

        for (int j = 0; j < TAM; j++) {

            frota[i][j] = '~';
            tiros[i][j] = '.';

        }

    }

}

void posicionarFrota(char frota[TAM][TAM]) {

    // Cruzador (3 posições) - horizontal
    frota[1][1] = 'N';
    frota[1][2] = 'N';
    frota[1][3] = 'N';

    // Contratorpedeiro (2 posições) - vertical
    frota[4][5] = 'N';
    frota[5][5] = 'N';

    // Submarino (1 posição)
    frota[7][0] = 'N';

}

void mostrarTiros(char tiros[TAM][TAM]) {

    printf("   ");

    for (int i = 0; i < TAM; i++)
        printf("%2d ", i + 1);

    printf("\n");

    for (int i = 0; i < TAM; i++) {

        printf("%2d ", i + 1);

        for (int j = 0; j < TAM; j++) {

            printf(" %c ", tiros[i][j]);

        }

        printf("\n");

    }

}

void mostrarFrota(char frota[TAM][TAM]) {

    printf("   ");

    for (int i = 0; i < TAM; i++)
        printf("%2d ", i + 1);

    printf("\n");

    for (int i = 0; i < TAM; i++) {

        printf("%2d ", i + 1);

        for (int j = 0; j < TAM; j++) {

            printf(" %c ", frota[i][j]);

        }

        printf("\n");

    }

}