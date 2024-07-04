#include <stdio.h>
#include <stdlib.h>
int main(){
    float compra[100], venda[100], lucro[100];
    int cont1=0, cont2=0, cont3=0;
    
    for(int i=0; i<100; i++){
        printf("Informe o valor da compra do produto %d:", i+1);
        scanf("%f", &compra[i]);
        printf("Informe o preco da venda do produto %d:", i+1);
        scanf("%f", &venda[i]);

        lucro[i] = ((venda[i] - compra[i])/compra[i])*100;
    }
    for(int i=0; i<100; i++){
        if(lucro[i]< 10){
            cont1++;
        }else if(10 <= lucro[i] && lucro[i]<= 20){
            cont2++;
        }else if(lucro[i]>20){
            cont3++;
        }
    }
    printf("A quantidade de mercadoria com lucro menor de 10%%: %d\n", cont1);
    printf("A quantidade de mercadoria com lucro entre 10%% e 20%%: %d\n", cont2);
    printf("A quantidade de mercadoria acima de 20%%: %d\n", cont3);
}