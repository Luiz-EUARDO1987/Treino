/**/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tresDisciplinas[3][200];
    float notas[3][2];
    float media[3];
    int i=0,j=0;
    //entrada de dados
     for(i=0;i<3;i++)
    {
        printf("Digite o nome da Disciplina: %i\n",i++);
        get(tresDisciplinas[i]);
        system("cls || clear");
        for(j=0;j<2;j++)
        {
            printf("Digite a  nota: %i",j++);
            scanf("%f", &notas);
            getchar();
            system("cls || clear");
        media[i]+=notas[i][j]
        }//fimPara02
    }//fimPara01
    //saida de dados
    for(i=0;i<3;i++)
    {
        printf("Disciplina: %i\nNome da disciplina: %s"\n,i++,tresDisciplinas[i]);
        for(j=0;j<2;j++)
        {
            printf("%i nota: %.2f",i++,notas[i][j]);
        }//fimPara02
        printf("Mdeia: %.2f",media[i]/(float)2);
    if(media[i]>7)
    {
        Printf("Estado: Aprovado\n");
    }//fimSe01
    else  if(media[i]>5)
    {
        Printf("Estado: Recuperação\n");
    }//fimSe02
    else
    {
       printf("Estado: Reprovado\n");
    }//fimElse
    }//fimPara01
    return 0;
}