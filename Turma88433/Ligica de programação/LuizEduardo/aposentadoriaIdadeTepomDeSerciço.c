#include <stdio.h>
#include <stdlib.h>
int main()
{
    int idade,codigoEmpregado,tempoSevico;


    printf("Digite seu codigo de identificaçao.\n");
    scanf("%i",&codigoEmpregado);
    system("cls || clear");
    fflush(stdin);

     printf("Digite o ano em que nasceu.\n");
    scanf("%i",&idade);
    system("cls || clear");
    fflush(stdin);

     printf("digite o ano em que entrou na empresa.\n");
    scanf("%i",&tempoSevico);
    system("cls || clear");
    fflush(stdin);

    if ((2023-idade >= 65) || (2023-tempoSevico >=30))
    {
        printf("codigo do identificacao: %i\nidade: %i\ntempo de servico: %i\n",codigoEmpregado,2023-idade,2023-tempoSevico);
        printf("solicitar aposentadoria.\n");
    }
    else
    {
        printf("codigo do identificacao: %i\nidade: %i\ntempo de servico: %i\n",codigoEmpregado,2023-idade,2023-tempoSevico);
        printf("Nao solicitar aposentadoria.\n");
    }
    return 0;
}