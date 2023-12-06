#include<stdio.h>
#include<stdlib.h>
float inflacao(float valor)
{
    if (valor<100)
    {
        valor+=valor*0,1;
    }
    else
    {
        valor+=valor*0,2;
    }
}
int main()
{
    float valor;
    printf("Digite um valor");
    scanf("%f", &valor);
    system("cls || clear");
    valor=inflacao(valor);
    printf("valor: %f",valor);
}