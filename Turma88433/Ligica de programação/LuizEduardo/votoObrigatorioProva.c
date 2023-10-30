/*Elabore um algoritmo usando operações lógicas para informar se uma pessoa é obrigada a votar.
Considere que a regra é que menores de 18 e maiores que 65 não são obrigados a votar.
Solicite apenas a idade do usuário.  */
   #include <stdio.h>
   #include <stdlib.h>
    int main()
    {
        int idade = 0;
        
        printf("Digite sua idade\n");
        scanf("%i",&idade);
        system("Cls || clear");

        if (idade>=18&&idade<=65)
        {
            printf("Voce e obrigado a votar");
        }
        else
        {
            printf("Voce nao e obrigado a votar");
        }
    }