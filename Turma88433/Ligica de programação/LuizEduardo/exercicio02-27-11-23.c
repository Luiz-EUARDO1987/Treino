#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct pessoaFicha
    {
       char nome[200];
       int idade;
       float peso;
       float altura;
    };
    struct pessoaFicha pessoas;
    
    printf("Digite seu nome\n");
    gets(pessoas.nome);
    system("cls || clear");
   
    printf("Digite sua idade\n");
    scanf("%i",&pessoas.idade);
    system("cls || clear");
   
    printf("Digite seu peso\n");
    scanf("%f", &pessoas.peso);
    system("cls || clear");
   
    printf("digite sua altura\n");
    scanf("%f", &pessoas.altura);
    system("cls || clear");
    
    return 0;
}