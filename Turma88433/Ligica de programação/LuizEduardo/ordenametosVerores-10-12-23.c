// chamando as bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//declaração de constantes
#define tamanho 11
//chamando funções
int ordemMaioMenor(int vetor[]);
//declaração da função principal
int main()
{
    int vetor[tamanho]={10,9,8,7,6,5,4,3,2,1,0};
    int i;
    vetor[tamanho] = ordemMaioMenor(vetor);
    for ( i = 0; i < tamanho; i++)
    {
    printf("O vetor em ordem decrescente eh: %i\n",vetor[i]);
        /* code */
    }
    
    return 0;
}

int ordemMaioMenor(int vetor[])
{
    //declarado variáveis
    int saida=1,i=0,transporte=0;
    int vetor01[tamanho];
    //estrutura de repetição principal
    for ( i = 0; i < tamanho; i++)
    {
        vetor01[i] = vetor[i];
    }
    
    do
    {   //variável de saída
       // size_t fimVetor = sizeof(vetor)/sizeof(vetor[0]);
      
                for (i = 0; i < tamanho; i++)
                {
                    if (vetor01[i]>vetor01[i+1])
                    {        
                        printf("vetor I: %i\n",vetor01[i]);
                        printf("vetor I+1: %i\n",vetor01[i+1]);
                        transporte = vetor01[i];
                        vetor01[i] = vetor01[i+1];
                        vetor01[i+1] = transporte;
                        printf("vetor I: %i\n",vetor01[i]);
                        printf("vetor I+1: %i\n",vetor01[i+1]);
                        sleep(1);
                        system("cls || clear");
                    }
                    else
                    {
                        saida = 0;
                    }
                }
        
           
        
        
    } while (saida!=0);
                    
    
    return vetor01[tamanho];
}//fimMain