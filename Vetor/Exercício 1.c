#include <stdio.h>
#include <stdlib.h>
int main(){
    int numb[15], numero, numb_encontrado;

    for(int i=0; i<15; i++){
        printf("Informe o numero %d:", i+1);
        scanf("%d", &numb[i]);
    }
    printf("Digite um numero a ser buscado:");
    scanf("%d", &numero);

    for(int i=0; i<15; i++){
        if(numb[i]== numero){
            printf("Numero: %d\nPosicao do numero: %d\n", numero, i);
            numb_encontrado = 0;
        }
    }
    if(!numb_encontrado){
        printf("Nao encontrado!");
    }  
}