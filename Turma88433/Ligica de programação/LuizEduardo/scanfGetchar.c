#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    //para modificar a acentuação gráfica da lingua portuguesa
    setlocale(LC_ALL,"portuguese");
    //Declaração de variáveis
    char letra = 'a';
    char letra2 = 'a';
    //bloco de c�digo para para solicitar uma char do usu�rio
    printf("Digite uma leta 1.\n");//Saida de dados
    scanf("%c",&letra);//entrada de  dados, defeito pode pegar sem querer o enter do teclado que fica salvo buf.
    getchar();// para remover o enter
    system("cls || clear");// limpar tela
    letra = toupper(letra);//para converter e atribuir a mesma vari�vel

    printf("Digite uma leta2.\n");
    scanf("%c",&letra2);
    getchar();
    system("cls || clear");
    letra2 = toupper(letra2);

    printf("letra: %c\nletra: %c\n",letra,letra2);
    return 0;
}