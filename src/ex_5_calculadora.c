#include <stdio.h>

// implementação de uma calculadora simples (com condicionais)
int main(void) {
    int a,b;
    char operacao;
    printf("digite um numero:");
    scanf("%d", &a);
    printf("digite um numero:");
    scanf("%d", &b);
    printf("digite a operação ( * , + , - ou /):");
    scanf("%c", &operacao);
    if (operacao == '*' || operacao == '+' || operacao == '-' || operacao == '/' ){
        if (operacao == '*'){
            int mult = a*b;
            printf("a multiplicação de %d e %d é igual a: %d", a,b, mult);
        }
        if (operacao == '+'){
            int soma = a + b;
            printf("a soma de %d e %d é igual a: %d", a,b, soma);
        }
        if (operacao == '-'){
            int sub = a - b;
            printf("a subtração de %d e %d é igual a: %d", a,b, sub);
        }
        if (operacao == '/'){
            if (b != 0){
                int div = a / b;
                printf("a divisão de %d e %d é igual a: %d", a,b, div);
            } else {
                printf("não é possível dividir por zero");
            }
        }    
    } else {
        printf("digite as operaçãoes sugeridas(* , + , - ou /)");
    }
    
    return 0;
}