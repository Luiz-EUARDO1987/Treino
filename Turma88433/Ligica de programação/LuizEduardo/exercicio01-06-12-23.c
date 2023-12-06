#include<stdio.h>
#include<stdlib.h>
int parF(int numero[]);
int imparF(int numero[]);
int main()
{
    int numero[6];
    int i=0,par=0,impar=0;
    for ( i = 1; i < 7; i++)
    {
        printf("\tDigite um numero: %i\n\t",i);
        scanf("%i", &numero[i]);
        getchar();
        system("cls || clear");
    }
     par =parF(numero);
     impar =imparF(numero);
    printf("\tpar: %i\n\timpar: %i",par,impar);
}
int parF(int numero[])
{
    int par=0,i=0;
    for ( i = 0; i < 6; i++)
    {
    if (numero[i] % 2 ==0)
    {
       par++;
        printf("e par: %i \n %i\n",par,numero[i]);
    } 
    }
   
    return par;
}
int imparF(int numero[])
{
    int impar=0,i=0;
    for ( i = 0; i < 6; i++)
    {
    if (numero[i] % 2 !=0)
    {
       impar++;
       printf("e impar: %i \n %i\n",impar,numero[i]);
    } 
    }
   
    return impar;
}