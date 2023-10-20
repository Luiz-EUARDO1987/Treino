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
    int verifica01,verifica02;
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

}while(verifica01 != 0 && verifica02 != 0);
}