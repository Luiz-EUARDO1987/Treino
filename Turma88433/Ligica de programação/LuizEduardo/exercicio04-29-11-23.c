#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct pessoa_Cadastro
    {
     char nome[250];
     int dataAdmicao;
     char matricula[250];
     char endereco[250];
     int dataNascimento;
    }funcionario[3],cliente[3];
    int i;
    for ( i = 0; i < 3; i++)
    {
        printf("Digite o nome do funcionario: %d\n",i+1);
        gets(funcionario[i].nome);
        system("cls || clear");

        printf("Data de admissao do funcionario: %d\n",i+1);
        scanf("%d",&funcionario[i].dataAdmicao);
        system("cls || clear");
        getchar();

        printf("Matricula do funcionario: %d\n",i+1);
        gets(funcionario[i].matricula);
        system("cls || clear");

        printf("Endereco do funcionario: %d\n",i+1);
        gets(funcionario[i].endereco);
        system("cls || clear");
    }    
    for ( i = 0; i < 3; i++)
    {
        printf("\n\nDigite o nome do cliente: %d\n",i+1);
        gets(cliente[i].nome);
        system("cls || clear");

        printf("Data de nascimento do cliente: %d\n",i+1);
        scanf("%d",&cliente[i].dataNascimento);
        system("cls || clear");
        getchar();

        printf("Digite o endereco do cliente: %d",i+1);
        gets(cliente[i].endereco);
        system("cls || clear");
    }
    for ( i = 0; i < 3; i++)
    {
        printf("Nome Funcionario: %s\nData de admissao: %i\nMatricula: %sEndereco: %s\n",funcionario[i].nome,funcionario[i].dataAdmicao,funcionario[i].matricula,funcionario[i].endereco);
        printf("\n");
        printf("Nome Cliente: %s\nIdade Cliente: %i\nEndereco Cliente: %s\n",cliente[i].nome,2023-cliente[i].dataNascimento,cliente[i].endereco);
        printf("\n");
    }
    
}