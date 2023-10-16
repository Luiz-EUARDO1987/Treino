/*escreva um código que peça o valor,forma de pagamento,se for credito o numero de parcelas. switchCase*/
// adicionando as bibliotecas para usar seus recursos.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//#define prazo 'p'
// criando o corpo do programa principal
int main()
{
    // declaração de variáveis
    int contador = 0;
    float valor,valorParcela;
    float desconto;
    float juros;
    int parcelas,receba;
    char formaPagar;
    char confirmarP = 'p';
    // atribuição pelo usuário variável valor
    printf("Digite o valor do produto.\n");
    scanf("%f", &valor);
    setbuf(stdin, 0);
    //_fpurge(stdin);
    //  fflush(stdin);
    system("cls || clear");

    // atribuição pelo usuário variável forma de pagamento
    printf("Digite a forma de pagamento (v)Avita e (p)prazo:\n");
    scanf("%c", &formaPagar);
    setbuf(stdin, 0);
    // _fpurge(stdin);
    //   fflush(stdin);
    system("cls || clear");

    // estrutura de decisão switchCase para forma de pagar
    switch (formaPagar)
    {
    case 'p':
    //estrutura de repetição
        do
        {
        printf("Digite o numero de parcelas, máximo(6)\n");
        scanf("%i", &parcelas);
        setbuf(stdin, 0);
        // _fpurge(stdin);
        //   fflush(stdin);
        system("cls || clear");
        //estrutura de escolha para controlar o laço de repetição
            if (parcelas > 0 && parcelas < 7)
            {
                contador++;
            }
            juros = (valor*10)/100;
            valorParcela = juros/parcelas;
        } while (contador < 1);

        break;
    case 'v':
        desconto = (valor*10)/100;
        break;

    default:
        break;
    }
    if (strcmp( confirmarP, formaPagar) == 0)
    {
    printf("valo: %.2f\nforma de pagamento: %c\nJuros: %.2f\nValor das parcelas: %.2f\n", valor, formaPagar,juros,valorParcela);
       
    }
    else
    {
    printf("valo: %.2f\nforma de pagamento: %c\nDesconto: %f\n", valor-desconto, formaPagar,desconto);

    }

    return 0;
}
