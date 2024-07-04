#include <stdio.h>
#include <stdlib.h>
int main(){
    long cod[30], telef[30], busca_cod=0, encontrado=0;

    for(int i=0; i < 30; i++){
        printf("Digite o numero do codigo %d:", i+1);
        scanf("%d", &cod[i]);
        printf("Digite o numero do telefone %d:", i+1);
        scanf("%d", &telef[i]);
    }
    printf("Digite o codigo a ser buscado:");
    scanf("%d", &busca_cod);

    for(int i=0; i < 30; i++){
        if(cod[i]== busca_cod);
        printf("O numero do telefone ao codigo %d: %d\n", busca_cod, telef[i]);
        encontrado = 1;
        break;
    }
    if(!encontrado){
        printf("O codigo %d nao encontrado\n", busca_cod);
    }
}