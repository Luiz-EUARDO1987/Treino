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
    int i=0;
    struct pessoaFicha pessoas[5] ;
    for ( i = 0; i < 5; i++)
    {
        printf("Digite seu nome\n");
        gets(pessoas[i].nome);
        system("cls || clear");
    
        printf("Digite sua idade\n");
        scanf("%i", &pessoas[i].idade);
        system("cls || clear");
    
        printf("Digite seu peso\n");
        scanf("%f", &pessoas[i].peso);
        system("cls || clear");
    
        printf("digite sua altura\n");
        scanf("%f", &pessoas[i].altura);
        system("cls || clear");
        getchar();
    }
    
    
    return 0;
}