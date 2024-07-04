#include <stdio.h>
#include <stdlib.h>
int main(){
    float salario[20], reaj[20];

    for(int i=0; i<20; i++){
        printf("Informe o salario da pessoa %d:", i+1);
        scanf("%f", &salario[i]);

        reaj[i]= salario[i]*1.08;
    }
    for(int i=0; i<20; i++){
        printf("\nO salario da pessoa %d:%3.2f\n", i+1, salario[i]);
        printf("O novo salario:%3.2f\n\n", reaj[i]);
    }
}
