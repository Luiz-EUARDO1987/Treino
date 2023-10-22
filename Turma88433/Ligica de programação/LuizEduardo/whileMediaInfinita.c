/*programa pergunta se quer adicionar outra nota a media se digitar "N" sai do programa*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include <unistd.h>
#define continue02 "C"
#define sair "N"

int main()
{
    char resposta[250] ="";
    char escolhaCN ="";
    int fim = 1;
    float nota = 0;
    float media = 0;
    int contador = 0;
    //int sim =1;
    int nao =1;
   
    setlocale(LC_ALL,"portuguese");
  //estrutura de repeti��o principal. do-while
    do
    {
  
      //menu de escolha adicionar notas a media ou sair
        printf("----- Menu -----\nDigite uma das op��es abaixo\n (N) | para sair\n (C) | para inserir outra nota\n");
        scanf(" %c", & escolhaCN);
        system("cls || clear");
        /*Para limpar o buffer em Windows, use: fflush(stdin)
        Para limpar o buffer em Linux, use: __fpurge(stdin)*/
      
        // transformar letra em mai�sculas
      escolhaCN =toupper(escolhaCN);
      //comparando as strings e atribuindo o retorno para sim ou nao
      switch (escolhaCN)
      {
      case 'C':

         do
         {
          nota = 0;
          printf("Digite A %i� nota\n",contador+1);
          scanf("%f",&nota);
          system("cls || clear");
          // valida��o da notas
          if(nota > 0 && nota <= 10)
          {
          contador++; 
          fim =0;
          media += nota;
          }

          }while(fim != 0);

        break;

      case 'N':

        nao=0;
        
        break;
      
      default:

        printf("Erro! escolha uma das op��es validas.\n");
        sleep(5);
        system("cls || clear");

        break;
      }
      
     
    }while(nao != 0);

    media /= contador;
    
    if(media > 7)
    {
      strcpy(resposta,"Aprovado");
    }
    else if(media >= 5)
    {
      strcpy(resposta,"Recupera��o");
    }
    else
    {
      strcpy(resposta,"Reprovado");
    }
  printf("media: %.1f\n Aluno: %s\n",media,resposta);
    
    return 0;
}