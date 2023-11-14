#include <stdio.h>
#include <stdio.h> //comando system para limpar a tela 

int main(){
    //vamos usar o comando system(/bin/clear) para 
    //Limpar a tela antes de executar os demais comandos
    system("/bin/clear");
    
    int num; 
    printf("Digite um numero a lhe diremos se é par ou impar\n");
    scanf("%d",&num);
    if(num % 2 == 0)
        printf("O numero %d é par\n",num);
    else
        printf("O numero %d é impar\n");

return 0;
}