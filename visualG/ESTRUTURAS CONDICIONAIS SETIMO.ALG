Algoritmo "estruturas condicionais setimo"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 4/9/2023
Var
   // Se��o de Declara��es das vari�veis
   nome: caracter
   quantidade:inteiro
   precoUnitario, total,desconto:real

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   //atribui��o de variaveis
   escreval("Digite o nome do produto")
   leia(nome)
   limpatela

   escreval("Digite o quantidade do produto")
   leia(quantidade)
   limpatela

   escreval("Digite o pre�o unitario do produto")
   leia(precoUnitario)
   limpatela
   //opera��o e tribui��o
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
   escreval("pre�o unitario: ",precoUnitario)
   escreval("total a pagar: ",total)
   escreval("desconto: ",desconto)


Fimalgoritmo