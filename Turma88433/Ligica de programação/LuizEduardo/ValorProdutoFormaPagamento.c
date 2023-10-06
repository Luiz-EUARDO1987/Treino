#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define v 'p'
int main()
{
    char forma;
    int parcelas;
    float valor, pagar;
    int se;

    printf("digite o valor do produto\n");
    scanf("%f", &valor);
    fflush(stdin);
    system("cls || clear");

    printf("Digite (v) para avista e (p)prazo,\n ");
    scanf("%c", &forma);
    fflush(stdin);
    system("cls || clear");

    se = strcmp(forma, v);
    printf("%c\n %i ",forma,se)
    
    if (se == 0)
    {
        printf("Digite o numero de parcelas, sendo que o max é 6.\n ");
        scanf("%i", & parcelas);
        fflush(stdin);
        system("cls || clear");
    }

    switch (forma)
    {
    case 'v':
        pagar = ((valor * 10) / 100) - valor;
        break;

    case 'p':
        pagar = valor / parcelas;
        break;

    default:
        printf("erro: valor digitado incorreto.\n");
        break;
    }
}