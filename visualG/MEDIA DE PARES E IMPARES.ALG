Algoritmo "media de pares e impares"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/09/2023
Var
   // Se��o de Declara��es das vari�veis
   numeros,par,impar, contador:inteiro
   media,mediaPar:real

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   enquanto numeros > -1 faca
   
   escreval("digite uma numero: ",numeros + 1)
   leia(numeros)
   limpatela

      se(numeros >= 0)entao

         se(numeros % 2 = 0)entao

         par <- par + 1
         mediaPar <- mediaPar + numeros

         senao
         
         impar <- impar +1
         mediaImpar <- numeros + mediaImpar

         fimse
         contador <- contador + 1

      fimse

   fimenquanto
   
   mediaPar <- mediaPar / contador
   mediaImpar <- mediaImpar / cointador
   media <- media/ contador
   
   escreval("a media geral � ",media)
   escreval("a media de  numeros pares � ",mediaPar)
   escreval("a media de numeros impares � ",mediaImpares)
   escreval(""par)
   escreval(""impar)

Fimalgoritmo