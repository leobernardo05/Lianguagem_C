#include <stdio.h>

// calculadora
int main(void){
    int impar = 0, par = 0;
    int v[10];
    
    for(int i=0;i<10;i++) {
        printf("Digite um numero:\n");
        scanf("%d",&v[i]);
        if (v[i] % 2 == 0){
            par += 1;
        } else {
            impar += 1;
        }
    }
    printf("há %d numeros pares e %d numeros impares\n", par, impar);
    return 0;
}
