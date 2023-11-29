#include<stdio.h>
#include<stdlib.h>
int main() 
{
    struct pessoaFisica
    {
       char nome[250];
       int DataNascimento; 
       int Rg;
       int Cpf;

    }pessoas[5];
    int i=0;
    for (i=0;i<5;i++)
    {
        printf("\n\tDigite o Nome da Pessoa: %i",i+1);
        gets(pessoas[i].nome);
        system("cls || clear");

        printf("\n\t Digite a data de nascimento do %d° PESSOA: ",i+1);
        scanf("%d",&pessoas[i].DataNascimento);
        system("cls || clear");

        printf("\n\t Digite o rg do %d° PESSOA: ",i+1);
        scanf("%d",&pessoas[i].Rg);
        system("cls || clear");

        printf("\n\t Digite o cpf do %d° PESSOA: ",i+1);
        scanf("%d",&pessoas[i].Cpf);
        system("cls || clear");
        getchar();
    }
    for ( i = 0; i < 5; i++)
    {
        printf("Nome: %s\nIdade: %i\nRg: %i\nCpf: %i",pessoas[i].nome,2023-pessoas[i].DataNascimento,pessoas[i].Rg,pessoas[i].Cpf);
    }
    
    
}//fimMain