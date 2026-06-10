#include <stdio.h>
#include <locale.h> //necessario para inclusão de textos em português

// reprovado e aprovado
int main(void){
    // função importante para colocar textos em português e não desconfigurar
    setlocale(LC_ALL, "Portuguese");

    int a,b,c;
    printf("Digite sua primeira nota:");
    scanf("%d", &a);
    printf("Digite sua segunda nota nota:");
    scanf("%d", &b);
    printf("Digite sua terceira nota:");
    scanf("%d", &c);

    float media = (a + b + c)/3;

    if(media <= 10 && media >= 0){
        if (media < 7){
            printf("Você esta na final, pois sua média é %d", media);
        } else {
            printf("Você foi aprovado, pois sua média é %d", media);
        }
        
    } else {
        printf("Digite valores válidos");
    }
    
    return 0;
}