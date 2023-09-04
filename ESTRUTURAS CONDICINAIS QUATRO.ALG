Algoritmo "estruturas condicinais quatro"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 4/9/2023
Var
   // Seção de Declarações das variáveis
   morangoKg, macaKg,quiloTotal:real
   totalValor,desconto:real

Inicio
   // atribuição de variaveis.
   escreval("Digite o valor em quilogramas  de morango")
   leia(morangoKg)
   limpatela

   escreval("Digite o valor em quilogramas  de maçã")
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
    //valor das maçãs
       se(macaKg < 5 )entao
      totalValor <- totalValor +(macaKg * 1.8)
   senao
      totalValor <- totalValor +(macaKg * 1.5)
   fimse
   //descontos
   se((quiloTotal >= 8)ou (totalValor >= 25))entao
   desconto <- (totalValor * 10) / 100
   fimse

   //impressão de retorno
   escreval("valor total: ",totalValor)
   escreval("total em quilogramas: ",quiloTotal)
   escreval("morango kg: ",morangoKg)
   escreval("maçãs kg: ",macaKg)
   escreval("desconto em reais: ",desconto)
Fimalgoritmo