/*Crie um programa que leia 3 notas, 
armazenando em um vetor e mostre as notas informadas.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float mediaFinal(float notas[])
{
  float mediaFu =0;
  int i = 0;
  while (notas[i]!='\0')
  {
    /*
    printf("Digite o numero: %i\n",i+1);
    scanf("%i", &notas[i]);
    system("");
    
    */
    if (notas[i]>=0 && notas[i]<= 10)
    {
      mediaFu = mediaFu + notas[i];
     i++;
    }
  }
    notas[i]='\0';
    mediaFu /= (float)i;
  return (mediaFu);
}
float resposta(float media);
int main()
{
  int tamanho = 4,i =0;
  float notasAluno[4];
  float media =0;
   
  do
  {
    printf("Digite o numero: %d\n",i+1);
    scanf("%f", &notasAluno[i]);
    system("cls || clear");
    if (notasAluno[i]>=0 && notasAluno[i]<=10)
    {
     i++;
    }//fimSe01
   
  }while (i < tamanho);
  media = mediaFinal(notasAluno);
  
  printf("media: %.2f\n",media);
  resposta(media);
}
float resposta(float media)
{
  char estado[250];
  if(media >= 7)
    {
        strcpy(estado, "aprovado");
    }
    else if(media >= 5)
    {
        strcpy(estado, "Recuperacao");
    }
    else
    {
        strcpy(estado, "Reprovado");
    }
    printf("Estado do aluno: %s\n",estado);
    return 0;
}