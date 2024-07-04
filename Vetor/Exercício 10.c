#include <stdio.h>
#include <stdlib.h>
int main(){
    int vet[10], w[10];

    for(int i=0; i<10; i++){
        w[i]=1;
        printf("Informe o numero %d:", i+1);
        scanf("%d", &vet[i]);

        for(int x = 1; x <= vet[i]; x++){
            w[i] *=x;
        }
    }
        for(int i=0; i<10; i++){
            printf("%d ! = %d  \n", vet[i], w[i]);
        }
    }

