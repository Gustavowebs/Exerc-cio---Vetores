#include <stdio.h>
#include <stdlib.h>
int main(){
    int qtd[30], cod[30], op_lista, cod_Produto, x, op_Produto2=0;
    float Valor_merc[30], Valor_venda[30];

    for(int i=0; i<30; i++){
        printf("Informe o numero do codigo:");
        scanf("%d", &cod[i]);
        printf("Informe a quantidade de mercadoria:");
        scanf("%d", &qtd[i]);
        printf("Informe o valor da mercadoria:");
        scanf("%f", &Valor_merc[i]);
        printf("Informe o valor da venda da mercadoria:");
        scanf("%f", &Valor_venda[i]);
    }
    printf("Desejar listar seus produtos?\n1-sim\n2-Nao\nOpcao:");
    scanf("%d", &op_lista);

    if(op_lista == 1){
        for(int i=0; i<30; i++){
            printf("Codigo: %d\nquantidade: %d\nvalor da mercadoria: R$ %3.2f\n", cod[i], qtd[i], Valor_merc[i], Valor_venda[i]);
        }
    }else{
        printf("Informe o codigo do produto a ser procrurado:");
        scanf("%d", &cod_Produto);
        
        for(int i=0; i<30; i++){
            if(cod_Produto == cod[i]){
                op_Produto2=1;
                x=i;
            }
        }
        if(op_Produto2 == 0){
            printf("Mercadoria nao encontrada!");
        }else{
            printf("Codigo: %d\nquantidade: %d\nvalor da mercadoria: R$ %3.2f\n", cod[x], qtd[x], Valor_merc[x], Valor_venda[x]);
        }
    }
}