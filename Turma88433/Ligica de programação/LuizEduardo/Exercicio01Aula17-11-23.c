/*crie um algoritimo que leia 6 valores inteiro,positivos e pares, em segida , mostre na tela os valores na ordem inversa,*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //atribuição de variáveis
    int vetor[6];
    int i =0;
    //laço de repetição principal
    do
    {
        //atribuição do vetor e limpesa da tela e do baff
        printf("Digite o numero: %i\n",i+1);
        scanf("%i", &vetor[i]);
        getchar();
        system("cls || clear");
        //estrutura condicional 
        if (vetor[i]>0 && vetor[i]%2==0)
        {
           i++;
        }//fimSe
        
    } while (i <6);
    //estrutura condicional para saida de dados
    for (i=5 ; i >= 0; i--)
    {
       printf("posição: %i\n valor: %i\n",i+1,vetor[i]);
    }//fimPara
    
    
}//FimMain