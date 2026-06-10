#include <stdio.h>

// impar ou par 
int main(void){
    int a;
    printf("Digite um valor:");
    scanf("%d", &a);

    if(a == 0){
        printf("%d é nulo", a);
    } else if (a < 0){
        printf("%d é negativo", a);
    } else {
        printf("%d é positivo", a);
    }
    return 0;
}