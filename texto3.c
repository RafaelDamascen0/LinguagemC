    #include <stdio.h>
    #include <stdlib.h>

    int main(){
        system("clear");
        char aluno[] = "";
        float n1,n2,n3,n4,media;

        printf("Digite o nome do aluno\n");
        scanf("%s",&aluno);

        printf("Digite a primeira nota\n");
        scanf("%f",&n1);

        printf("Digite a segunda nota\n");
        scanf("%f",&n2);

        printf("Digite a terceira nota\n");
        scanf("%f",&n3);

        printf("Digite a quarta nota\n");
        scanf("%f",&n4);

        media = (n1 + n2 + n3 + n4) / 4;

        printf("A média do aluno %s e %2f\n",aluno,media);

        if(media >= 6){
            printf("Aluno Aprovado\n");
        }
        else{
            printf("Aluno Reprovado\n");
        
        else{
            printf("Aluno recuperação\n");
        }
        return 0;
        }