#include <stdio.h>

// calculadora
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