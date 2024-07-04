#include <stdio.h>
#include <stdlib.h>
int main(){
    int vetor[30];

    for(int i=0; i <30; i++){
        printf("Informe o numero %d:", i+1);
        scanf("%d", &vetor[i]);
    }
    for(int i=29; i>=0; i--){
        printf("Ordem contraria %d: %d\n", i+1, vetor[i]);
    }
}