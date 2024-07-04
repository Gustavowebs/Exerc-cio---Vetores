#include <stdio.h>
#include <stdlib.h>
int main(){
    int numb[8], contador;

    for(int i=0; i<8; i++){
        printf("Informe numero %d:", i+1);
        scanf("%d", &numb[i]);
    }
    for(int i=0; i<8; i++){
        printf("Numeros %d:%d\n", i+1, numb[i]);
        if((numb[i]%6)== 0){
            contador++;
        }
    }
    printf("O total de numeros multiplos de 6: %d\n", contador);
}