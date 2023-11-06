/*Exercício 9: 
Em um projeto sobre números primos, implemente um programa que solicite ao usuário um número inteiro e
 verifique se ele é um número primo utilizando o switch case.
 Exiba a mensagem "Número primo" caso seja primo, ou "Número não primo" caso contrário.*/
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 int main()
 {
    int numero = 0,divisor = 0,primo=0;
    char aviso[250];
    
    printf("digite um numero\n");
    scanf("%i",&numero);
    system("cls || clear");

    divisor = numero;
    do
    {
       if (numero%divisor == 0 )
       {
        primo++;
       }
       divisor--;
    } while (divisor > 0);
    if (primo ==2)
    {
        strcpy(aviso,"numero primo");
    }
    else
    {
        strcpy(aviso,"numero nao e primo");
    }
    printf("%s",aviso);
    return 0;
 }