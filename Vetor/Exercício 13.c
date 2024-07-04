#include <stdio.h>
#include <stdlib.h>
int main(){
    int qtd_lugares[10], total_voo=0, numb_voo, numb_lugar, indentidade, cont;

    for(int i=0; i<10; i++){
        printf("Informe a quantidade de lugares no voo %d:", i+1);
        scanf("%d", &qtd_lugares);
        total_voo += qtd_lugares;
    }
    while(cont < total_voo){
        numb_lugar=0;
        indentidade=0;
        numb_voo=1;
        
        printf("Informe o numero do voo:");
        scanf("%d", &numb_voo);

        if(numb_voo == 0){
            break;
        }else if(numb_voo < 0 || numb_voo > 10){
            printf("Informe o numero correto de voo\n");
            continue;
        }
        printf("Informe a sua indentidade:");
        scanf("%d", &indentidade);
        printf("Informe a quantidade de lugares:");
        scanf("%d", &numb_lugar);

        if((qtd_lugares[numb_voo] - numb_lugar)<0){
            printf("VAGA DE LUGAR NESTE VOO ESGOTADO!\n");
        }else{
            cont+= numb_lugar;
            qtd_lugares[numb_voo] -= numb_lugar;
            printf("O numero %d no voo %d\n", indentidade, numb_voo);
        }
    }
}