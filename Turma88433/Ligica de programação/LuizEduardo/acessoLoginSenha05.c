/*Exercício 10: 
Crie um programa que solicite ao usuário dois números e uma operação matemática (+, -).
 Utilize o switch case para realizar a operação desejada e exibir o resultado.*/
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 #define senhaSistema "senia123456"
 #define loginSistema "senai123456"

int main()
{
    char senha[250];
    char login[250];
    char aviso[250];
    int retorno01= 1,retorno02 =1, confirmacao;
    do
    {
        retorno01 = strcmp(senha,senhaSistema);
        retorno02 = strcmp(login,loginSistema);
        if (retorno01 == 0 && retorno02 == 0)
        {
            strcpy(aviso,"acesso permitido");
            confirmacao++;
        }
        else
        {
            printf("login ou senha incorreta.");
        }
        
    } while (confirmacao != 1);
    
    printf("%s",aviso);
    return 0;
}