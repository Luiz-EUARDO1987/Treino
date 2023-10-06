Algoritmo "mediaAprovado"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/09/2023
Var
   // Seção de Declarações das variáveis
   nota1,media:real
   contador:inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   // cria una estrutura que diga se o anuno passou, ficou retido ou reprovado

   enquanto (contador < 2) faca

      escreval("Digite a nota")
      leia(nota1)
      limpatela



      se (nota1 > -1)  e (nota1 < 11) entao

         media <-   media + nota1
         contador <-  contador +1
         escreval("contando")

      senao

         escreval("A nota digita esté errada")

      fimse

   fimenquanto
   media <- media/2

   se(media >= 7)entao
   
   escreval("Aprovado")
   
   senao
   
   se(media > 5)e(media < 7 )entao
   escreval("Recuperação")
   
   senao
   escreval("Reprovado")
   
   fimse
   
   fimse



Fimalgoritmo