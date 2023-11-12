/*Crie um programa que leia 3 notas, armazenando em um
vetor e calcule a média aritmética.
Mostre as 3 notas informadas pelo usuário e informe a média.*/
//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//funções a serem chamadas/declaração do protótipo existente.
char estado(float media);
float mediaNotas(float notas[],float media);
//variáveis globas
float finalMedia = 0;
float notasAluno[4] = {0};
char resposta[250];
int main()
{
    int i =0;
   
    i=0;
    while (i<4)
    {
        printf("Digite a Nota: %i\n",i+1);
        scanf("%f", &notasAluno[i]);
        system("cls || clear");
          if (notasAluno[i]>=0 && notasAluno[i]<=10)
        {
           
            finalMedia += notasAluno[i];
            i++;
        }
    }
     finalMedia /= 4;
    estado(finalMedia);
    //saida de dados
    printf("media final: %.2f\n",finalMedia);
    printf("estado do aluno: %s\n",resposta);
    mediaNotas(notasAluno,finalMedia);
    
}
//criando função estado
char estado(float media)
{
    if (media >= 7)
    {
        strcpy(resposta,"Aprovado");
    }
    else if (media >= 5)
    {
        strcpy(resposta,"Recuperação");
    }
    else
    {
       strcpy(resposta,"Reprovado");
    }
    return 0;
}
//criando função mediaNota
float mediaNotas(float notas[],float media)
{
    int i = 0;
    while (i<4)
    {
        /* code */
    printf("notas: %.2f\n",notas[i]);
    i++;
    }
    return 0;
}