#include <stdio.h>

// soma -- se atentar, pois dependendo o powershell não lê
int main(void){
    int a,b;
    printf("Digite um valor:");
    scanf("%d", &a);
    printf("Digite outro valor:");
    scanf("%d", &b);
    int soma = a + b;
    printf("a soma de %d e %d é: %d\n", a , b,soma);
    return 0;
}