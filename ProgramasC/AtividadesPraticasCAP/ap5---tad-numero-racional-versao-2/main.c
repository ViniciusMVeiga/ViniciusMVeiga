/*

Autor: Prof. Ricardo Rodrigues Ciferri.
Data de Criação: 01/12/2020.
Data de Atualização: 07/08/2023.
Atualizado por: Vinícius Marto da Veiga (RA 821252).

Objetivo:

Um número racional é uma fração, a qual é representada na forma de
"numerador/denominador", sendo que o valor do denominador deve ser diferente
de zero. Além disso, ambos o numerador e o denominador são números inteiros.
A definição completa sobre número racional pode ser encontrada na URL
http://pt.wikipedia.org/wiki/Número_racional.

Escreva sub-rotinas (funções ou procedimentos) para:
- Ler um número racional r.
- Escrever um número racional r.
- Somar dois números racionais r1 e r2 (r1 + r2).
- Subtrair dois números racionais r1 e r2 (r1 - r2).
- Multiplicar dois números racionais r1 e r2 (r1 * r2).
- Dividir dois números racionais r1 e r2 (r1 / r2).

Restrições:

Os números racionais devem ser simplificados de forma que fiquem em sua forma
mais básica. Por exemplo, 20/100 deve ser simplificado para 1/5.
Isso deve ser realizado como resultado da leitura de um número racional,
ou seja, após o número racional ser lido do teclado, ele já deve ser
simplificado dentro da própria sub-rotina de leitura. O número racional também
deve ser simplificado nas operações de soma, subtração, multiplicação e divisão
de números racionais. Desta forma, o resultado de cada uma dessas operações
deve ser um número racional simplificado.

Sugestões:

Use MDC (máximo divisor comum) para simplificar ambos o numerador e o
denominador da fração que representa o número racional.
Veja o método 2 no link abaixo para relembrar o uso de MDC.

Link MDC
- https://www.todamateria.com.br/simplificacao-de-fracao/

Use MMC (mínimo múltiplo comum) para calcular as operações de soma, subtração,
multiplicação e divisão de números racionais. Veja link abaixo.

Link
- https://mundoeducacao.uol.com.br/matematica/adicao-subtracao-racionais-1.htm

*/

// Bibliotecas de funções predefinidas

#include <stdio.h>
#include <stdlib.h>

// Declaração global de constantes e tipos

typedef struct
{
   int n;     // numerador
   int d;     // denominador, deve ser diferente de zero (divisão por zero)
   int sinal; // sinal do número racional
} tRacional;

// Protótipos de funções

void leiaRacional(tRacional *);
// tRacional leiaRacional(); // Implementação alternativa por valor de retorno
void escrevaRacional(tRacional);

tRacional somaRacional1(tRacional, tRacional);
tRacional subtraiRacional1(tRacional, tRacional);
tRacional multiplicaRacional1(tRacional, tRacional);
tRacional divideRacional1(tRacional, tRacional);
tRacional simplificaRacional1(tRacional);
void somaRacional2(tRacional, tRacional, tRacional *);
void subtraiRacional2(tRacional, tRacional, tRacional *);
void multiplicaRacional2(tRacional, tRacional, tRacional *);
void divideRacional2(tRacional, tRacional, tRacional *);
void simplificaRacional2(tRacional *);

int MDC(int, int);
int MMC(int, int);

// Função principal

int main()
{
   // Declaração local de variáveis
   tRacional racional1;
   tRacional racional2;
   tRacional resultado;

   // Leitura de dados
   printf("Leitura do 1o numero racional\n");
   leiaRacional(&racional1);
   // racional1 = leiaRacional();
   printf("\n");
   printf("Leitura do 2o numero racional\n");
   leiaRacional(&racional2);
   // racional2 = leiaRacional();
   printf("\n\n");

   // Soma de números racionais
   printf("Soma:\n");
   resultado = somaRacional1(racional1, racional2);
   // somaRacional2(racional1, racional2, &resultado);
   escrevaRacional(resultado);
   printf("\n");

   // Subtração de números racionais
   printf("Subtracao:\n");
   resultado = subtraiRacional1(racional1, racional2);
   // subtraiRacional2(racional1, racional2, &resultado);
   escrevaRacional(resultado);
   printf("\n");

   // Multiplicação de números racionais
   printf("Multiplicacao:\n");
   resultado = multiplicaRacional1(racional1, racional2);
   // multiplicaRacional2(racional1, racional2, &resultado);
   escrevaRacional(resultado);
   printf("\n");

   // Divisão de números racionais
   printf("Divisao:\n");
   resultado = divideRacional1(racional1, racional2);
   // divideRacional2(racional1, racional2, &resultado);
   escrevaRacional(resultado);
   printf("\n");

   // Valor de retorno
   return 0;
}

// Função: leiaRacional.
// Objetivo: ler um número racional.
// Parâmetros:
// - r = número racional (parâmetro de saída).
// Valor de Retorno:
// - Nenhum.

void leiaRacional(tRacional *r)
{
   // Inicialização
   r->sinal = 1;

   // Leitura do numerador
   printf("Digite o numerador: ");
   scanf("%d", &r->n);

   // Leitura do denominador
   printf("Digite o denominador: ");
   scanf("%d", &r->d);

   if (r->d < 0 || r->n < 0)
      r->sinal = -1;

   // Simplificação
   *r = simplificaRacional1(*r);
   // *r = simplificaRacional2(*r);
}

/*

// Função: leiaRacional.
// Objetivo: ler um número racional.
// Observações:
// - Implementação que usa valor de retorno para a leitura do número racional.
// Parâmetros:
// - Nenhum.
// Valor de Retorno:
// - Número racional que foi lido do teclado.

tRacional leiaRacional()
{
   // Declaração local de variáveis
   tRacional num;
   int mdc;

   // Leitura do numerador
   printf("Numerador: ");
   scanf("%d", &num.n);

   // Leitura do denominador
   printf("Denomidador: ");
   scanf("%d", &num.d);

   // Simplificação
   num = simplificaRacional(num);

   // Valor de retorno
   return num;
}

*/

// Função: escrevaRacional.
// Objetivo: escrever na tela do monitor um número racional.
// Parâmetros:
// - r = número racional (parâmetro de entrada).
// Valor de Retorno:
// - Nenhum.

void escrevaRacional(tRacional r)
{
    //Tratamento do sinal
    if(r.n>0&&r.d<0){
        r.n=r.n*-1;
        r.d=r.d*-1;
    }
   // Escrita do número racional
   printf("Número racional = %d/%d\n", r.n, r.d);
}

// Função: somaRacional1.
// Objetivo: somar dois números racionais r1 e r2 (r1 + r2).
// Parâmetros:
// - r1 = primeiro número racional (parâmetro de entrada).
// - r2 = segundo número racional (parâmetro de entrada).
// Valor de Retorno:
// - número racional com o valor da soma de r1 e r2.

tRacional somaRacional1(tRacional r1, tRacional r2)
{
   // Declaração local de variáveis
   tRacional soma; // racional com o valor da soma de r1 e r2.

   // Cálculo da soma
   soma.d = MMC(r1.d, r2.d);
   soma.n = (soma.d / r1.d * r1.n) + (soma.d / r2.d * r2.n);
   soma = simplificaRacional1(soma);
   // simplificaRacional2(&soma);

   // Valor de retorno
   return soma;
}

// Função: somaRacional2.
// Objetivo: somar dois números racionais r1 e r2 (r1 + r2).
// Parâmetros:
// - r1 = primeiro número racional (parâmetro de entrada).
// - r2 = segundo número racional (parâmetro de entrada).
// Valor de Retorno:
// - número racional com o valor da soma de r1 e r2.

void somaRacional2(tRacional r1, tRacional r2, tRacional *soma)
{

   // Cálculo da soma
   soma->d = MMC(r1.d, r2.d);
   soma->n = (soma->d / r1.d * r1.n) + (soma->d / r2.d * r2.n);
   *soma = simplificaRacional1(*soma);
   // simplificaRacional2(&soma);
}

// Função: subtraiRacional1.
// Objetivo: subtrair dois números racionais r1 e r2 (r1 - r2).
// Parâmetros:
// - r1 = primeiro número racional (parâmetro de entrada).
// - r2 = segundo número racional (parâmetro de entrada).
// Valor de Retorno:
// - número racional com o valor da subtracão de r1 e r2 (r1 - r2).

tRacional subtraiRacional1(tRacional r1, tRacional r2)
{
   // Declaração local de variáveis
   tRacional subtracao; // racional com o valor da subtração de r1 e r2.

   // Cálculo da subtração
   subtracao.d = MMC(r1.d, r2.d);
   subtracao.n = (subtracao.d / r1.d * r1.n) - (subtracao.d / r2.d * r2.n);
   subtracao = simplificaRacional1(subtracao);
   // simplificaRacional2(&subtracao);

   // Valor de retorno
   return subtracao;
}

// Função: subtraiRacional2.
// Objetivo: subtrair dois números racionais r1 e r2 (r1 - r2).
// Parâmetros:
// - r1 = primeiro número racional (parâmetro de entrada).
// - r2 = segundo número racional (parâmetro de entrada).
// Valor de Retorno:
// - número racional com o valor da subtracão de r1 e r2 (r1 - r2).

void subtraiRacional2(tRacional r1, tRacional r2, tRacional *subtracao)
{
   // Cálculo da subtração
   subtracao->d = MMC(r1.d, r2.d);
   subtracao->n = (subtracao->d / r1.d * r1.n) - (subtracao->d / r2.d * r2.n);
   *subtracao = simplificaRacional1(*subtracao);
   // simplificaRacional2(&subtracao);
}

// Função: multiplicaRacional1.
// Objetivo: multiplicar dois números racionais r1 e r2 (r1 * r2).
// Parâmetros:
// - r1 = primeiro número racional (parâmetro de entrada).
// - r2 = segundo número racional (parâmetro de entrada).
// Valor de Retorno:
// - número racional com o valor da multiplicação de r1 e r2.

tRacional multiplicaRacional1(tRacional r1, tRacional r2)
{
   // Declaração local de variáveis
   tRacional multiplica; // racional com o valor da multiplicação de r1 e r2.

   // Cálculo da soma
   multiplica.n = r1.n * r2.n;
   multiplica.d = r1.d * r2.d;
   multiplica = simplificaRacional1(multiplica);
   // simplificaRacional2(&multiplica);

   // Valor de retorno
   return multiplica;
}

// Função: multiplicaRacional2.
// Objetivo: multiplicar dois números racionais r1 e r2 (r1 * r2).
// Parâmetros:
// - r1 = primeiro número racional (parâmetro de entrada).
// - r2 = segundo número racional (parâmetro de entrada).
// Valor de Retorno:
// - número racional com o valor da multiplicação de r1 e r2.

void multiplicaRacional2(tRacional r1, tRacional r2, tRacional *multiplica)
{
   // Cálculo da soma
   multiplica->n = r1.n * r2.n;
   multiplica->d = r1.d * r2.d;
   *multiplica = simplificaRacional1(*multiplica);
   // simplificaRacional2(&multiplica);
}

// Função: divideRacional1.
// Objetivo: dividir dois números racionais r1 e r2 (r1 / r2).
// Parâmetros:
// - r1 = primeiro número racional (parâmetro de entrada).
// - r2 = segundo número racional (parâmetro de entrada).
// Valor de Retorno:
// - número racional com o valor da divisão de r1 e r2 (r1 / r2).

tRacional divideRacional1(tRacional r1, tRacional r2)
{
   // Declaração local de variáveis
   tRacional divide; // racional com o valor da divisão de r1 e r2.

   // Cálculo da soma
   divide.n = r1.n * r2.d;
   divide.d = r1.d * r2.n;
   divide = simplificaRacional1(divide);
   // simplificaRacional2(&divide);

   // Valor de retorno
   return divide;
}

// Função: divideRacional2.
// Objetivo: dividir dois números racionais r1 e r2 (r1 / r2).
// Parâmetros:
// - r1 = primeiro número racional (parâmetro de entrada).
// - r2 = segundo número racional (parâmetro de entrada).
// Valor de Retorno:
// - número racional com o valor da divisão de r1 e r2 (r1 / r2).

void divideRacional2(tRacional r1, tRacional r2, tRacional *divide)
{
   // Cálculo da soma
   divide->n = r1.n * r2.d;
   divide->d = r1.d * r2.n;
   *divide = simplificaRacional1(*divide);
   // simplificaRacional2(&divide);
}

// Função: simplificaRacional1.
// Objetivo: simplificar um número racional, de forma que fique em sua forma
// mais básica. Por exemplo, 20/100 deve ser simplificado para 1/5.
// Parâmetros:
// - r = número racional (parâmetro de entrada).
// Valor de Retorno:
// - número racional simplificado.

tRacional simplificaRacional1(tRacional r)
{
   // Declaração local de variáveis
   int mdc; // máximo divisor comum entre numerador e denominador

   // Simplificação do número racional
   mdc = MDC(r.n, r.d);
   r.n = r.n / mdc;
   r.d = r.d / mdc;

   // Tratamento do sinal

   // Valor de retorno
   return r;
}

// Função: simplificaRacional2.
// Objetivo: simplificar um número racional, de forma que fique em sua forma
// mais básica. Por exemplo, 20/100 deve ser simplificado para 1/5.
// Parâmetros:
// - r = número racional (parâmetro de entrada).
// Valor de Retorno:
// - número racional simplificado.

void simplificaRacional2(tRacional *r)
{
   // Declaração local de variáveis
   int mdc; // máximo divisor comum entre numerador e denominador

   // Simplificação do número racional
   mdc = MDC(r->n, r->d);
   r->n = r->n / mdc;
   r->d = r->d / mdc;
}

// Função: MDC.
// Objetivo: calcular o máximo divisor comum entre 2 números inteiros.
// Observações:
// - algoritmo de Euclides iterativo.
// - https://www.blogcyberini.com/2018/03/algoritmo-para-calcular-o-mmc.html
// Parâmetros:
// - n1 = primeiro número (parâmetro de entrada).
// - n2 = segundo número (parâmetro de entrada).
// Valor de Retorno:
// - MDC entre n1 e n2.

int MDC(int n1, int n2)
{
   // Declaração local de variáveis
   int r; // resto

   // Cálculo do MDC
   while (n2 != 0)
   {
      r = n1 % n2;
      n1 = n2;
      n2 = r;
   }

   // Valor de retorno
   return n1;
}

// Função: MMC.
// Objetivo: calcular o mínimo múltiplo comum entre 2 números inteiros.
// Observações:
// - uso da propriedade MMC(n1,n2) * MDC(n1,n2) = n1 * n2
// - https://www.blogcyberini.com/2018/03/algoritmo-para-calcular-o-mmc.html
// Parâmetros:
// - n1 = primeiro número (parâmetro de entrada).
// - n2 = segundo número (parâmetro de entrada).
// Valor de Retorno:
// - MMC entre n1 e n2.

int MMC(int n1, int n2)
{
   // Cálculo do MMC
   // Valor de retorno
   return n1 * (n2 / MDC(n1, n2));
}