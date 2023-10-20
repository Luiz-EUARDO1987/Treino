#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>
#define loginVerdade "senai88433"
#define senhaVedade "senai88433"
int main()
{
    char login[250] = "";
    char senha[250] = "";
    int verifica01,verifica02,confirmar;
setlocale(LC_ALL,"portuguese");
do
{  
    printf("Digite seu login\n");
    gets(login);
    system("cls || clear");
   
    printf("Digite sua senha\n");
    gets(senha);
    system("cls || clear");

verifica01=strcmp(login,loginVerdade);
verifica02=strcmp(senha,senhaVedade);
if (verifica01 == 0 && verifica02 == 0)
{
    confirmar = 1;
}
printf("login ou senha invalidos.");
sleep(5);
system("cls || clear");

}while(confirmar != 1);
printf("Seja-bem vino");
}