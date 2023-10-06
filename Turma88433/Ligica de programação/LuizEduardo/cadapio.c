#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo;


    printf("                    -----Menu-----                         \n");
    printf("-----------------------------------------------------------\n");
    printf("----- Codigo: -----    prato:         -----  valor    -----\n");
    printf("-----   1     -----  pao com ovo      -----    R$ 5   -----\n");
    printf("-----   2     -----     dogao         -----    R$ 7.5 -----\n");
    printf("-----   3     ----- pao com mortadela -----    R$ 3.5 -----\n");
    printf("Digite o codigo do prato desejado\n");
    scanf("%i",&codigo);
    system("cls || clear");
    fflush(stdin);

    switch (codigo)
    {
    case 1:
        printf("codigo: %i\nprato: pao com ovo\nvalor: R$ 5\n",codigo);
        break;

    case 2:
        printf("codigo: %i\nprato: dogao \nvalor: R$ 7.5\n",codigo);
        break;

    case 3:
        printf("codigo: %i\nprato: pao com mortadela\nvalor: R$ 3.5\n",codigo);
        break;

    
    default:
    printf("Erro");
        break;
    }
}