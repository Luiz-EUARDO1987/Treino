#include<stdio.h>
#include<stdlib.h>
#define tam 10
int main()
{
    int vetor[tam]={0};
    int i=0;
    size_t f = (int)sizeof(vetor) / (int)sizeof(vetor[0]);
    for ( i = 0; i < f; i++)
    {
        printf("\t%i: %i\n",i+1,f);
    }//fimFor
 

}//finMain