    #include<stdio.h>
    #include<stdlib.h> 
    #include"cabecalho.h"
    int main(){
        tela();
        system("clear");
        system("mkdir documentos");
        system("cd documentos");
        system("touch elementos.txt");
        printf("Os comandos foram executados....\n");  
        return 0;
    }