Algoritmo "estruturas condicinais quatro"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 4/9/2023
Var
   // Se��o de Declara��es das vari�veis
   morangoKg, macaKg,quiloTotal:real
   totalValor,desconto:real

Inicio
   // atribui��o de variaveis.
   escreval("Digite o valor em quilogramas  de morango")
   leia(morangoKg)
   limpatela

   escreval("Digite o valor em quilogramas  de ma��")
   leia(macaKg)
   limpatela
   quiloTotal <- morangoKg + macaKg

   //estruturas condicionais
     // valor dos morangos
   se(morangoKg < 5 )entao
      totalValor <- totalValor +(morangoKg * 2.5)
   senao
      totalValor <- totalValor +(morangoKg * 2.2)
   fimse
    //valor das ma��s
       se(macaKg < 5 )entao
      totalValor <- totalValor +(macaKg * 1.8)
   senao
      totalValor <- totalValor +(macaKg * 1.5)
   fimse
   //descontos
   se((quiloTotal >= 8)ou (totalValor >= 25))entao
   desconto <- (totalValor * 10) / 100
   fimse

   //impress�o de retorno
   escreval("valor total: ",totalValor)
   escreval("total em quilogramas: ",quiloTotal)
   escreval("morango kg: ",morangoKg)
   escreval("ma��s kg: ",macaKg)
   escreval("desconto em reais: ",desconto)
Fimalgoritmo