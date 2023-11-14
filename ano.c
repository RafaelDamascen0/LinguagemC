#include <stdio.h>


int main(){

    int num;
    printf("Digite um ano e falaremos se ele é bissesto:");
    scanf("%d",&num);
    if(num % 4 == 0)
        printf("O ano %d é Bissesto!\n");
    else
        printf("O ano %d não é Bissesto.\n");

return 0;

}
