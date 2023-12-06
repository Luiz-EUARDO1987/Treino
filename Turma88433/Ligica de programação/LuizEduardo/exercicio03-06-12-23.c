#include<stdio.h>
#include<stdlib.h>

float converteF(float metros02);
int main()
{
    float metros=0,centimetros=0;
    printf("Digite o valor em metros\n");
    scanf("%f", &metros);
    centimetros=converteF(metros);
    printf("o valor de %.2fm em centimetros %.2fcm",metros,centimetros);
    return 0;
}
float converteF(float metros02)
{
    float centimetros=0;
    centimetros= metros02*10;
    return centimetros;
}