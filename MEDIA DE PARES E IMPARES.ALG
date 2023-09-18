Algoritmo "media de pares e impares"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/09/2023
Var
   // Seção de Declarações das variáveis
   numeros,par,impar, contador:inteiro
   media,mediaPar:real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
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
   
   escreval("a media geral é ",media)
   escreval("a media de  numeros pares é ",mediaPar)
   escreval("a media de numeros impares é ",mediaImpares)
   escreval(""par)
   escreval(""impar)

Fimalgoritmo