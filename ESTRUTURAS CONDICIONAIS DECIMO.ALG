Algoritmo "estruturas condicionais decimo"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 5/9/2023
Var
   // Seção de Declarações das variáveis
   combustivel:caracter
   litros,totalApagar:real

Inicio
   //Um posto está vendendo combustíveis com a seguinte tabela de descontos:

   //Álcool Até 25 litros, desconto de 2% por litro
   //Acima de 25 litros, desconto de 4% por litro
   //Gasolina Até 25 litros, desconto de 3% por litro
   //Acima de 25 litros, desconto de 5% por litro

   //Escreva um algoritmo que leia o número de litros vendidos e o tipo de
   //combustível (codificado da seguinte forma: A-álcool, G-gasolina), calcule e
   // imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da
   // gasolina é R$ 6,59 e o preço do litro do álcool é R$ 3,79.

   //coleta e atribuição de dados
   escreval("Digite o tipo de combutivel")
   leia(combustivel)
   limpatela

   escreval("Digite quantos litros você deseja")
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