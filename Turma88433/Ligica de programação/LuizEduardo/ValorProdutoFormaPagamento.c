#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char forma;
    int parcelas;
    int valor;
    float valorTotal;


    printf("digite o valor do produto\n");
    scanf("%i", &valor);
    fflush(stdin);
    system("cls || clear");

    printf("Digite (v) para avista e (p)prazo,\n ");
    scanf("%c", &forma);
    fflush(stdin);
    system("cls || clear");
    
    switch (forma)
    {
    case 'v':
        valorTotal = ((valor * 10) / 100) - valor;
        break;

    case 'p':
        printf("Digite o numero de parcelas, sendo que o max é 6.\n ");
        scanf("%i", & parcelas);
        system("cls || clear");
       valorTotal = valor / parcelas;
        break;

    default:
        printf("erro: valor digitado incorreto.\n");
        break;
    }
}