Algoritmo "mediaAprovado"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/09/2023
Var
   // Se��o de Declara��es das vari�veis
   nota1,media:real
   contador:inteiro

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
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

         escreval("A nota digita est� errada")

      fimse

   fimenquanto
   media <- media/2

   se(media >= 7)entao
   
   escreval("Aprovado")
   
   senao
   
   se(media > 5)e(media < 7 )entao
   escreval("Recupera��o")
   
   senao
   escreval("Reprovado")
   
   fimse
   
   fimse



Fimalgoritmo