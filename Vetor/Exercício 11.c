#include <stdio.h>
#include <stdlib.h>
int main(){
    int n[100], cont1, cont2;
    float media, soma, percent=0;

    for(int i= 0; i<100; i++){
        printf("Digite o valor do numero %d:", i+1);
        scanf("%d", &n[i]);
        soma += n[i];
    }
    int maior = n[0];
    int menor = n[0];

    for(int i=0; i<100; i++){
        if(n[i]> maior){
            maior = n[i];
        }else if(n[i]< menor){
            menor = n[i];
        }
        if((n[i]%2)==0){
            cont1++;
        }
    }
    percent = cont1;
    percent = (percent/100)*100;
    printf("O maior numero: %d\nO menor numero: %d\n", maior, menor);
    printf("O percentual de numeros pares: %3.2f%%\n", percent);
    printf("A media dos vetores: %3.2f", media = soma/100);
}