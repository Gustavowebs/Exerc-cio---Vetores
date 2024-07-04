#include <stdio.h>
#include <stdlib.h>
int main(){
    int numb[100], qtd_numb=0, x=-1;
    for(int i=0; i<100; i++){
        printf("Informe o valor do numero %d:", i+1);
        scanf("%d",&numb[i]);
        if(numb[i]==0){
            i=100;
            x--;
        }
        x++;
    }
    for(int i=0; i<x; i++){
            if(numb[i]==numb[x]){
                    qtd_numb++;
            }
    }
    printf("A quantidade de numero igual ao ultimo: %d", qtd_numb);
}
