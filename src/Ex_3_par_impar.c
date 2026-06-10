#include <stdio.h>

// impar ou par 
int main(void){
    int a;
    printf("Digite um valor:");
    scanf("%d", &a);

    if(a % 2 == 0){
        printf("%d é par", a);
    } else {
        printf("%d é ímpar", a);
    }
    return 0;
}