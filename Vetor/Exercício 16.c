#include <stdio.h>
#include <stdlib.h>
int main(){
    float numb[100], soma=0, media=0;
    int trinta=0, maior_media=0, igual_media=0;

    for(int i=0; i<100; i++){
        printf("Informe os valores do numeros:");
        scanf("%f", &numb[i]);
        soma += numb[i];
    }
    media = soma/100;
    for(int i=0; i<100; i++){
        if(numb[i] == 30){
            trinta++;
        }
        if(numb[i] >= media){
            maior_media++;
        }
        if(numb[i] == media){
            igual_media++;
        }
    }
    printf("A quantidade de numero igual a 30: %d\n", trinta++);
    printf("A quantidade de numero maior que a media: %d\n", maior_media);
    printf("A quantidade de numero igual a media: %d\n", igual_media);
}