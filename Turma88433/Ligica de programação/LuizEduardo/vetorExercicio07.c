/*Crie um algoritmo que leia o nome e a idade de 5 pessoas,
armazenando em vetores.
- Liste o nome e a idade de cada pessoa.*/
//chamando as bibliotecas
#include <stdio.h>
#include <stdlib.h>
//variáveis
char nomes[5][50];
int idade[5];
int i=0,n=0,g=0;

int main()
{
    //estrutura de repetição central
    for ( g = 0; g < 5; g++)
    {
        
            printf("Digite um nome:\n");
            fgets(nomes[g],250,stdin);
            //scanf("%50[^\n]", nomes[n]);
            //getchar();
         
            printf("Digite sua idade:\n");
            scanf("%i", &idade[g]);
            getchar();
      
        
    }//fimPara
    for ( i = 0; i < 5; i++)
    {
        printf("Nome: %s\nIdade: %i\n",nomes[i],idade[i]);
    }
    
}