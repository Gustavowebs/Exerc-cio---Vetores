#include <stdio.h>
#include <stdlib.h>
int main(){
    int numb1[10], numb2[10];

    for(int i=0; i<10; i++){
        printf("Informe o primeiro conjunto de numero:");
        scanf("%d", &numb1[i]);
    }
    for(int i=0; i<10; i++){
        printf("Informe o segundo conjunto de numero:");
        scanf("%d", &numb2[i]);
    }
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(numb1[i] == numb2[j]){
                printf("elemento comum: %d\n", numb1[i]);
                break;
            }
        }
    }
}