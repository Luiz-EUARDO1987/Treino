Algoritmo "estruturas condicionais decimo"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 5/9/2023
Var
   // Se��o de Declara��es das vari�veis
   combustivel:caracter
   litros,totalApagar:real

Inicio
   //Um posto est� vendendo combust�veis com a seguinte tabela de descontos:

   //�lcool At� 25 litros, desconto de 2% por litro
   //Acima de 25 litros, desconto de 4% por litro
   //Gasolina At� 25 litros, desconto de 3% por litro
   //Acima de 25 litros, desconto de 5% por litro

   //Escreva um algoritmo que leia o n�mero de litros vendidos e o tipo de
   //combust�vel (codificado da seguinte forma: A-�lcool, G-gasolina), calcule e
   // imprima o valor a ser pago pelo cliente sabendo-se que o pre�o do litro da
   // gasolina � R$ 6,59 e o pre�o do litro do �lcool � R$ 3,79.

   //coleta e atribui��o de dados
   escreval("Digite o tipo de combutivel")
   leia(combustivel)
   limpatela

   escreval("Digite quantos litros voc� deseja")
   leia(litros)
   limpatela


   //condicionais
   se(combustivel = "gasolina")entao
   
      se(litros <= 25 )entao
                TotalApagar <- litros*6,59
                totalApagar <- totalApagar + ((totalApagar*3)/100)
                
      senao
       se(litros > 25 )entao
                TotalApagar <- litros*6,59
                totalApagar <- totalApagar + ((totalApagar*5)/100)

      fimse

      fimse

   fimse
   
   se(combustivel = "etanol")entao

      se(litros <= 25 )entao
                TotalApagar <- litros * 3,79
                totalApagar <- totalApagar + ((totalApagar*2)/100)

      senao
       se(litros > 25 )entao
                TotalApagar <- litros * 3,79
                totalApagar <- totalApagar + ((totalApagar*4)/100)

      fimse

      fimse

   fimse

Fimalgoritmo