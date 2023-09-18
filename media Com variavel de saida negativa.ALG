Algoritmo "contador de numeros positivos"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/09/2023
Var
   // Seção de Declarações das variáveis
   media:real
   contador:inteiro
   divisor:inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   //estrutura de repetição
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