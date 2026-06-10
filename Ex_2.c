#include <stdio.h>

// reprovado e aprovado
int main(void){
    int a,b,c;
    printf("Digite suas notas:");
    scanf("%d %d %d", &a, &b, %c);

    float media = (a + b + c)/3;

    if(media <= 10 || media >= 0){
        if (media < 7){
            printf("Você está na final");
        } else {
            printf("Você foi aprovado");
        }
        
    } else {
        printf("digite valores validos");
    }
    
    return 0;
}