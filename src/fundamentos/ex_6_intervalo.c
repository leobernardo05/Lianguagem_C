#include <stdio.h>


// verificar se está no intervalo [10,20]
int main(void){
    int a;
    printf("digite um num:");
    scanf("%d", a);

    if (a >= 10 && a<=20){
        printf("%d está no intervalo", a);
    } else{
        printf("Não está no intervalo");
    }
    
    
    return 0;
}

// // trabalhando com laços agora
// int main(void){
//     for (int i = 10; i <= 20; i++){
//         printf("%d\n",i);
//     }
    
//     return 0;
// }