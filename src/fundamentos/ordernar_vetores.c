#include <stdio.h>

// ordem de vetores!!
int main(void){
    int maior, temp;
    int v[10];
    // adicionar valores no array
    for(int i=0; i<10; i++) {
        printf("Digite 10 valores:\n");
        scanf("%d", &v[i]);   
    }

    //----- verificação e ordenação
    for (int i=0; i<10; i++){
        for (int j = i; j < 10; j++){
            if (v[i] > v[j]){
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }

    // ------ exibição
    for (int i = 0; i < 10; i++){
        printf("%d\n", v[i]);
    }
    
    
    return 0;
}
