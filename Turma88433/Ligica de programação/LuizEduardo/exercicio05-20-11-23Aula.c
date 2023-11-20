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
        printf("Digite o nome da Disciplina: %i\n",i+1);
        gets(tresDisciplinas[i]);
        system("cls || clear");
        for(j=0;j<2;j++)
        {
            printf("Digite a  nota: %i\n",j+1);
            scanf("%f", &notas[i][j]);
            getchar();
            system("cls || clear");
        media[i]+=notas[i][j];
        }//fimPara02
    }//fimPara01
    //saida de dados
    for(i=0;i<3;i++)
    {
    	media[i]/=(float)2;
        printf("Disciplina: %i\nNome da disciplina: %s\n",i+1,tresDisciplinas[i]);
        for(j=0;j<2;j++)
        {
            printf("%i nota: %.2f\n",j+1,notas[i][j]);
        }//fimPara02
        printf("Mdeia: %.2f\n",media[i]);
    if(media[i]>=7)
    {
        printf("Estado: Aprovado\n");
    }//fimSe01
    else  if(media[i]>=5)
    {
        printf("Estado: Recuperação\n");
    }//fimSe02
    else
    {
       printf("Estado: Reprovado\n");
    }//fimElse
    }//fimPara01
	return 0;
    return 0;
}