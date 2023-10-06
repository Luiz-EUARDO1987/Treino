Algoritmo "estruturas condicionais setimo"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 4/9/2023
Var
   // Seção de Declarações das variáveis
   nome: caracter
   quantidade:inteiro
   precoUnitario, total,desconto:real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   //atribuição de variaveis
   escreval("Digite o nome do produto")
   leia(nome)
   limpatela

   escreval("Digite o quantidade do produto")
   leia(quantidade)
   limpatela

   escreval("Digite o preço unitario do produto")
   leia(precoUnitario)
   limpatela
   //operação e tribuição
   total  <- quantidade * precoUnitario

   //condicionais
   se(quantidade <= 5)entao

      desconto <- (tatal * 2)/100

   senao

      se(quantidade <= 10)entao

         desconto <- (total * 3)/100

      senao

         se(quantidade > 10)entao

            desconto <- (total * 5)/100

         fimse

      fimse

   fimse
   escreval("nome do produto: ",nome)
   escreval("quantidade adiqueridade: ",quantidade)
   escreval("preço unitario: ",precoUnitario)
   escreval("total a pagar: ",total)
   escreval("desconto: ",desconto)


Fimalgoritmo