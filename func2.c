    #include<stdio.h>
    #include<stdlib.h>

    int soma(int valores[],int tamanho);

    int main(){
        int num[6] = {24,28,64,25,74};

        printf("O resultado da soma é %d\n",soma(num,5));

        return 0;


}

    int soma(int valores[], int tamanho){
        int x;
        int rs = 0;
        for(x = 0 ; x <tamanho ; x++){
            rs += valores[x];
        }
        return 0;
    }