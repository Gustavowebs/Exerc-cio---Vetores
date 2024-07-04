#include <stdio.h>
#include <stdlib.h>
int main(){
    float prova1[15], prova2[15], media[15];

    for(int i=0; i<15; i++){
        printf("Informe a nota da prova 1 do aluno %d:", i+1);
        scanf("%f", &prova1[i]);
        printf("Informe a nota da prova 2 do aluno %d:", i+1);
        scanf("%f", &prova2[i]);

        media[i]= (prova1[i] + prova2[i])/2;
    }
    for(int i=0; i<15; i++){
        printf("Aluno %d:\nNota da prova 1: %3.2f\nNota da prova 2: %3.2f\nMedia: %3.2f\n", i+1, prova1[i], prova2[i], media[i]);

        if(media[i] >= 6.00){
            printf("PARABENS! APROVADO!\n");
        }else{
            printf("REPROVADO!  ESTUDAR MAIS!\n");
        }
    }
}