#include <stdio.h>
#include <stdlib.h>
int main(){
    char letra[10];

    for(int i=0; i<10; i++){
        printf("Digite uma letra:");
        scanf("\n%[^\n]s", &letra[i]);
    }

    for(int i=0; i<10; i++){
        printf("letra %d:%c\n", i+1, letra[i]);
    }
}
