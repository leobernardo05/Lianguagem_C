#include <stdio.h>

// calculadora
int main(void){
    char ordem = 'v';
    int maior = 0;
    int v[10];
    
    for(int i=0;i<10;i++) {
        printf("Digite 10 valores em ordem crescente:\n");
        scanf("%d", &v[i]);
        if (i == 0){
            maior = v[0];
        }
        if (v[i] < maior){
            ordem = 'f';
        }
    }
    if (ordem == 'v'){
        printf("Está em ordem!");
    } else {
        printf("Não está em ordem");
    }
    
    return 0;
}
