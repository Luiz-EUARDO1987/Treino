#include<stdio.h>
#include<stdlib.h>

int somaF(float numero[]);
int subtracaoF(float numero[]);
float divisaoF(float numero[]);
int multiplicacaoF(float numero[]);


int main()
{
    float divisao;
    int soma,subtracao,multiplicacao;
    float numero[2];
    int i=0;

    do
    {
       printf("Digite um numero: %i\n",i+1);
       scanf("%f", &numero[i]);
       getchar();
       system("cls || clear");
       i++;
    }while ( i != 2);
    
    soma=somaF(numero);
    subtracao=subtracaoF(numero);
    divisao=divisaoF(numero);
    multiplicacao=multiplicacaoF(numero);
    printf("soma: %i\nsubtracao: %i\ndivisao: %.2f\nmultiplicacao: %i\n",soma,subtracao,divisao,multiplicacao);
    return 0;
}
int somaF(float numero[])
{
    int soma;
    soma = numero[0]+numero[1];
    
 return (soma);   
}
int subtracaoF(float numero[])
{
    int subtracao;
    subtracao = numero[0]-numero[1];
    
 return (subtracao);   
}
float divisaoF(float numero[])
{
    float divisao;
    divisao = numero[0]/numero[1];
    
 return (divisao);   
}
int multiplicacaoF(float numero[])
{
    int multiplicacao;
    multiplicacao = numero[0]*numero[1];
    
 return (multiplicacao);   
}