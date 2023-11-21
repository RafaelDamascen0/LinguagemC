#include <stdio.h>
#include <stdlib.h>

int main (){
    system("clear");//limpar a tela
    int valor = 32;
    int novo = valor;
    int pnum = 2;
    int xpnum = &num;
    printf("O valor é %d\n",valor);
    printf("A posição de memória de valor é %p\n",&valor);
    printf("O valor de novo é %d\n",novo);
    printf("A posição de memória de novo é %p\n",&novo);

    printf("O valor de num é  %d\n",num);
    printf("A posição de memória de num é %p\n",&pnum);

    return 0;
}