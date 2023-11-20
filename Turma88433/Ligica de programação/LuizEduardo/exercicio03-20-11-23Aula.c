/*crie um algoritimo que receba três notas de dois semetres e informe a media*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nomes[3][200];
    float notas[2][3];
    float media[3];
    int i=0,j=0;
    //atribuição
    for(i=0;i<3;i++)
    {
        printF("Digite O nome do aluno\n");
        gets(nomes[i]);
        system("cls || clear");
        for(j=0;j<3;j++)
        {
            printF("Digite a nota: %i\n",j+1);
            Scanf("%f", &notas[i][j]);
            system("cls || clear");
            media[i] +=notas[i][j];
        }//fimPara02
        media[i]=media[i]/(float)3;
    }//FimPara01
    for(i=0;i<3;i++)
    {

     printF("nome: %s",nomes[i]);
     printF("media: %.2f",media[i]);

    }//FimPara01
    return 0;
}//fimMain