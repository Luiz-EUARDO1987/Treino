Algoritmo "contador de numeros positivos"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/09/2023
Var
   // Se��o de Declara��es das vari�veis
   media:real
   contador:inteiro
   divisor:inteiro

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   //estrutura de repeti��o
   enquanto contador > -1 faca

      escreval("digite o valor")
      leia(contador)
      limpatela

      se( contador > 0)entao
         media <- media + contador
         divisor <- divisor +1

      fimse
      
   fimenquanto
   
   media <- media/divisor
   escreval("media :",media)


Fimalgoritmo