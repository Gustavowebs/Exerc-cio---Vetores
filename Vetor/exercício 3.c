#include <stdio.h>
#include <stdlib.h>
int main(){
    int numb[4];
    
    for(int i=0; i<4; i++){
        printf("Digite numero %d:", i+1);
        scanf("%d", &numb[i]);
    }
    for(int i=0; i<4; i++){
        if((numb[i]%2)==0){
            printf("PAR %d:%d\n", i+1, numb[i]);
        }else if((numb[i]%2)!=0){
            printf("IMPAR %d:%d\n", i+1, numb[i]);
        }
    }
}