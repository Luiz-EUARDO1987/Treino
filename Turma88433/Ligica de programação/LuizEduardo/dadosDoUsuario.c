#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declaração de variaveis
    int idade = 0;
    float peso = 0;
    char sexo;
    char nome [100];

    // atribuição de variaveis peso e idade
    printf("Digite sua idade\n");
    scanf("%i", &idade);
    system("cls");

    printf("digite seu peso\n");
    scanf("%f", &peso);
    system("cls");

    fflush(stdin); // comondo para limpar o cash e não guandar a entrda enter na variavel char
    printf("digite seu sexo\n");
    scanf("%c", &sexo);
    system("cls");

    fflush(stdin); // comondo para limpar o cash e não guandar a entrda enter na variavel char
    printf("digite seu nome\n");
    gets(nome);
   // scanf("%s", &nome);
  // fgets(nome,100,stdin);
  system("cls");

    printf("idade: %i \n peso: %.2f \n sexo: %c \n nome: %s", idade, peso, sexo,nome);
}