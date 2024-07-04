#include <stdio.h>
#include <stdlib.h>
void main(){
    int VET[20], VET2[20], cont1, j=0, cont2=0, ord;

        for(int i=0;i<20;i++){
            printf("Informe um numero: ");
            scanf("%d",&VET[i]);
            VET2[i]=0;
            }
        for(int i=0; i<20; i++){
            cont1=0;
            for(int x=0; x<20; x++){
                if(VET[i]==VET[x]){
                    cont++;
                }
            }
        if(cont1==1){
            VET2[j]=VET[i];
            j++;
        }
        if(cont1>1){
            cont2=0;
            for(int x=0; x<j; x++){
                if(VET2[x]==VET[i]){
                    cont2++;
                    if(cont2==1){
                        VET2[j]=VET[i];
                        j++;
                    }
                }
            }
        }
        }
        for (int c=1;c<j;c++) {
            for (int i =0;i<j-1;i++) {
                if (VET2[i] > VET2[i + 1]) {
                    ord = VET2[i];
                    VET2[i] = VET2[i + 1];
                    VET2[i + 1] = ord;
                }
            }
        }
        printf("\nElementos que nao se repetem em ordem:\n");
        for (int i=0;i<j;i++) {
                printf("%d \n", VET2[i]);
        }
    }