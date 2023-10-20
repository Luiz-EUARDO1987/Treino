#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int main()
{
    setlocale(LC_ALL,"portuguese");
    int saida = 0;
    int idade =0;
    int idadeMioa = 0;
    int idadeMenor= 0;
    char sexo = 'g';
    float salario = 0;
    float salarioMedia = 0;
    int media = 0;
    int idadeVerdade = 0;
    int fCinco = 0;
    do
    {
        idade = 0;
        saida = 0;
        salario = 0;
        idadeVerdade = 0;
        printf("   Código | Descrição\n   1 | Adicionar pessoa  \n   2 | sair e exibir resultados\n");
        scanf("%i", &saida);
        system("cls || clear");
        fflush(stdin);

        if(saida == 1)
        {
            printf("Digite seu sexo: (M)maculino e (F)feminino.\n");
            scanf("%c",&sexo);
            system("cls || clear");
            fflush(stdin);
         switch (sexo)
         {
         case 'f': 
            do
            {
            printf("Digite sua idade.\n");
            scanf("%i",&idade);
            system("cls || clear");
            fflush(stdin);
            if(idade > 15 && idade < 100)
            {
                idadeVerdade = 1;
            }
            }while(idadeVerdade != 1);

            printf("Digite seu salario.\n");
            scanf("%f",&salario);
            system("cls || clear");
            fflush(stdin);

            if(salario > 5000.0)
            {
                fCinco++; 
            }
            salarioMedia += salario;
            media ++; 

            break;
         
         case 'm':
            do
           {
            printf("Digite sua idade.\n");
            scanf("%i",&idade);
            system("cls || clear");
            fflush(stdin);
            if(idade > 15 && idade < 100)
            {
                idadeVerdade = 1;
            }
           }while(idadeVerdade != 1);
            
            printf("Digite seu salario.\n");
            scanf("%f",&salario);
            system("cls || clear");
            fflush(stdin);

            salarioMedia += salario;
            media++;
            break;
         
         default:
         printf("Erro!");
         sleep(5);
         system(stdin);
            break;
         }   
         if(idade > idadeMioa)
         {
            if (idadeMenor < idadeMioa)
            {
                /* code */
            idadeMenor = idadeMioa;
            }
            
            idadeMioa = idade;
         }
        Printf("Erro");
        sleep(5);
        system("cls || clear");
 
        }

    }while(saida != 2);
salarioMedia /= media;
printf("media salario: %.2f|\n",salario);
printf("maior idade: %i\n",idadeMioa);
printf("menor idade: %i\n",idadeMenor);
printf("mulher que ganha mais 5000,00: %i\n",fCinco);

return 0;
}