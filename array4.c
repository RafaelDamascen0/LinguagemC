#include<stdio.h>
#include<stdlib.h>

int main(){
    system("clear");
    int num[7] = {10,20,30,50,70,7,9};
    int i=0, soma=0;
    while(i < 7){
        soma += num[i];
        i++;
}        
printf("O resultado da soma é %d\n,",soma);
    return 0;
}