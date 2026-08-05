#include <stdio.h>

// jogo da velha
int main(void){
    char tabuleiro[3][3];
    char jogador = 'X';
    int linha, coluna;
    int jogadas = 0;
    int venceu = 0;

    // preenchendo matriz
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            // vetor vazio adotado por ' '
            tabuleiro[i][j] = ' ';
        }
    }

    // logica do jogo da velha
    while (jogadas < 9 && !venceu){
        // exibir tabuleiro
        printf("\n   1  2  3\n");

        for (int i = 0; i < 3; i++){
            printf("%d ", i+1);
            for (int j = 0; j < 3; j++){
                printf(" %c ", tabuleiro[i][j]);
                // espaçamento entre numeros 
                if (j < 2){
                    printf("|");
                }
                
            }
            printf("\n");

            if (i < 2){
                printf("  ---+---+---\n");
            }
              
        }

        // Jogador da vez
        printf("\nJogador %c\n", jogador);

        printf("Informe a linha: ");
        scanf("%d", &linha);

        printf("Informe a coluna: ");
        scanf("%d", &coluna);

        // validação de limites
        if (linha < 1 || linha > 3 || coluna < 1 || coluna > 3){
            printf("Posicao invalida\n");
            continue;
        }

        linha--;
        coluna--;

        // verificação de ocupação
        if(tabuleiro[linha][coluna] != ' '){
            printf("Posicao ocupada! Escolha outra.\n");
            continue;
        }

        // Faz a jogada
        tabuleiro[linha][coluna] = jogador;
        jogadas++;

             // Verifica linhas
        for (int i = 0; i < 3; i++) {
            if (tabuleiro[i][0] == jogador &&
                tabuleiro[i][1] == jogador &&
                tabuleiro[i][2] == jogador) {

                venceu = 1;
            }
        }

        // Verifica colunas
        for (int j = 0; j < 3; j++) {
            if (tabuleiro[0][j] == jogador &&
                tabuleiro[1][j] == jogador &&
                tabuleiro[2][j] == jogador) {

                venceu = 1;
            }
        }

        // Diagonal principal
        if (tabuleiro[0][0] == jogador &&
            tabuleiro[1][1] == jogador &&
            tabuleiro[2][2] == jogador) {

            venceu = 1;
        }

        // Diagonal secundária
        if (tabuleiro[0][2] == jogador &&
            tabuleiro[1][1] == jogador &&
            tabuleiro[2][0] == jogador) {

            venceu = 1;
        }

        // Troca de jogador
        if(!venceu){
            if (jogador == 'X')
                jogador = 'O';
            else 
                jogador = 'X';
            
        }
               
    }

    // Mostra o tabuleiro final
    printf("\n    1   2   3\n");

    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);

        for (int j = 0; j < 3; j++) {
            printf(" %c ", tabuleiro[i][j]);

            if (j < 2)
                printf("|");
        }

        printf("\n");

        if (i < 2)
            printf("   ---+---+---\n");
    }

    // Resultado
    if (venceu)
        printf("\nO jogador %c venceu!\n", jogador);
    else
        printf("\nO jogo terminou empatado!\n");

    return 0;
        
        
}
    



    

    

