#include<stdio.h>
#include<stdlib.h>
#include<string.h>
float imcF(float altura,float peso);
char* pesoidealF(float imc);
int main()
{
    float altura, peso,imc;
    char pesoideal[250];
    printf("Digite sua altura\n");
    scanf("%f", &altura);
    system("cls || clear");
   
    printf("Digite seu peso\n");
    scanf("%f", &peso);
    system("cls || clear");
    imc = imcF(altura,peso);
    strcpy(pesoideal,pesoidealF(imc));
    printf("imc: %.2f\n peso ideal: %s",imc,pesoideal);
    return 0;
}

float imcF(float altura, float peso)
{
    float imcRetorno;
    imcRetorno = peso/(altura*2);
    return imcRetorno;
}

char* pesoidealF(float imc)
{
    char pesoideal[250];
    if (imc >40)
    {
       strcpy(pesoideal,"Obesidade tipo 3.");
    }
    else if (imc >35)
    {
       strcpy(pesoideal,"Obesidade tipo 2.");
    }
    else if (imc >30)
    {
       strcpy(pesoideal,"Obesidade tipo 1.");
    }
    else if (imc > 25)
    {
       strcpy(pesoideal,"excesso de peso.");
    }
    else if (imc > 18.5)
    {
       strcpy(pesoideal,"peso normal.");
    }
    else
    {
       strcpy(pesoideal,"Abaixo do peso normal.");
    }
    return pesoideal;   
}