#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int vetor1[50], vetor2[50], quadrado[50];

    for(int i=0; i<50; i++){
        printf("Informe o valor do numero %d:", i+1);
        scanf("%d", &vetor1[i]);
        quadrado[i]= pow(vetor1[i], 2);
    }
    for(int i=0; i<50; i++){
        printf("O quadrado do numero %d: %d\n", i+1, quadrado[i]);
    }
}