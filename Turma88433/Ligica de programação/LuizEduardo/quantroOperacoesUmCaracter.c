#include <stdio.h>
#include <stdlib.h>
int main()
{
    char operacao;
    float numero01;
    float numero02;
    float resultado;
    printf("Digite o  numero \n");
    scanf("%f", &numero01);
    system("cls || clear");
    fflush(stdin);

    printf("Digite o  numero \n");
    scanf("%f", &numero02);
    system("cls || clear");
    fflush(stdin);

    printf("Digite (p) para soma, (s)subtracao, (d)divisao, (m)multiplicacao. \n");
    scanf("%c", &operacao);
    system("cls || clear");
    fflush(stdin);
    switch (operacao)
    {
    case 'p':
        resultado = numero01 + numero02;
        break;

    case 's':
        resultado = numero01 - numero02;
        break;

    case 'd':
        resultado = numero01 / numero02;
        break;

    case 'm':
        resultado = numero01 * numero02;
        break;

        default :
        printf("erro nem uma das alternativas a segui foi escolhida: (p) para soma, (s)subtracao, (d)divisao, (m)multiplicacao.\n");
        break;
    }
    printf("o numero: %.0f\n e numero: %.0f e igual: %.2f\n", numero01, numero02, resultado);
}