#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct pessoa_Ficha
    {
        char nome[250];
        int dataNascimento;
        int CPF;
    }funcionario,cliente;
   
    int i;
    
   for ( i = 0; i < 1; i++)
   {
    printf("Digite o nome do funcionario: \n");
    scanf("%s",&funcionario.nome);
    system("cls || clear");

    printf("Digite a data de nascimento(aaaa): \n");
    scanf("%d", &funcionario.dataNascimento);
    system("cls || clear");

    printf("Digite o CPF do funcionario: \n");
    scanf("%d", &funcionario.CPF);
    system("cls || clear");

    printf("Digite o nome do cliente: ");
    scanf("%s",&cliente.nome);
    system("cls || clear");

    printf("Digite a data de nascimento(aaaa): \n");
    scanf("%d", &cliente.dataNascimento);
    system("cls || clear");

    printf("Digite o CPF do cliente: \n");
    scanf("%d", &cliente.CPF);
    system("cls || clear");

   }
   printf("\t nome Funcionario: %s\n\t idade funcionario: %i\n\t CPF funcionario: %i\n",funcionario.nome,2023-funcionario.dataNascimento,funcionario.CPF);
    printf("\n\t nome cliente: %s\n\t idade cliente: %i\n\t CPF cliente: %i\n",cliente.nome,2023-cliente.dataNascimento,cliente.CPF);
    return 0;
}