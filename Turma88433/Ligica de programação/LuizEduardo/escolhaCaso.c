#include <stdio.h>
#include <stdlib.h>

int main()
{
    int diaSemana;
    printf("Digite de um a sete para obter informacoes seobre os dia da seman(domingo e 1)\n");
    scanf("%i", &diaSemana);
    system("cls || clear");
    fflush(stdin);
    switch (diaSemana)
    {
    case 1:
        printf("este dia: nao e dia util");
        break;

    case 2:
        printf("este dia: e dia util\n");
        break;

    case 3:
        printf("este dia: e dia util\n");
        break;

    case 4:
        printf("este dia: e dia util\n");
        break;

    case 5:
        printf("este dia: e dia util\n");
        break;

    case 6:
        printf("este dia: e dia util\n");
        break;

    case 7:
        printf("este dia: nao e dia util\n");
        break;

    default:
        printf("Erro");
        break;
    }
    return 0;
}