/**/
#include <stdio.h>
#include <stdlib.h>
int main()
{
   char nomes[2][200];
   float noats[2][3];
   int i=0,j=0;
   //atribuição de notas
   for(i=0;i<2;i++)
   {
     printf("digite o nome do aluno");
        gets(nomes[i]);
        system("cls || clear");
    for(j=0;j<3;j++)
    {
        printf("Digite a nota: %i\n",i+1);
        scanf("%i", &notas[i][j]);
        getchar();
        system("cls || clear");
    }//fimPara02
   }//fimPara01

for(i=0;i<2;i++)
{
    printf("nome: %s",nomes[i]);
    for(j=0;j<3;j++)
    {
        printf("nota: %f",notas[i][j]);
    }//fimPara02
}//FimPara01
}//fimMain