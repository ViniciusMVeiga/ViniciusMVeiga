// bibliotecas

#include <stdio.h>
#include <math.h>

//constantes
#define PI 3.14159

// declarações globais

typedef struct {
  double x; // coordenada do eixo x
  double y; // coordenada do eixo y
} tPonto; // ponto no espaço Euclidiano bidimensional

typedef struct {
    tPonto centro;
    double raio;
    double area, perimetro;
} tCirculo;

// protótipos

void leiaCirculo(tCirculo *);
void escrevaCirculo(tCirculo);
double calcAreaCirculo(double raio);
double calcPerimetroCirculo(double raio);
double calcDistanciaCentroCirculos(double x1, double y1, double x2, double y2);
double calcDistanciaMinimaCirculos (double distCentroCirculos, double raio1, double raio2);

// função principal

int main()
{
  // declarações locais
  
  tCirculo circulo1;
  tCirculo circulo2;
  
  double distanciaCentroCirculos;
  double distanciaMinimaCirculos;
  
  // leitura de dados
  
  printf("Circulo 1\n");
  leiaCirculo(&circulo1);
  escrevaCirculo(circulo1);
  
  printf("Circulo 2\n");
  leiaCirculo(&circulo2);
  escrevaCirculo(circulo2);
  
  // operações com círculo
  
  circulo1.area = calcAreaCirculo(circulo1.raio);
  printf("area do circulo 1 = %lf\n", circulo1.area);
  
  circulo2.area = calcAreaCirculo(circulo2.raio);
  printf("area do circulo 2 = %lf\n", circulo2.area);
  
  circulo1.perimetro = calcPerimetroCirculo(circulo1.raio);
  printf("perimetro do circulo 1 = %lf\n", circulo1.perimetro);

  circulo2.perimetro = calcPerimetroCirculo(circulo2.raio);
  printf("perimetro do circulo 2 = %lf\n", circulo2.perimetro);

  distanciaCentroCirculos = calcDistanciaCentroCirculos(circulo1.centro.x, circulo1.centro.y, circulo2.centro.x, circulo2.centro.y);
  printf("Distancia entre centro do circulo1 e centro do circulo2 = %lf\n", distanciaCentroCirculos);
  
  distanciaMinimaCirculos = calcDistanciaMinimaCirculos(distanciaCentroCirculos, circulo1.raio, circulo2.raio);
  printf("Distancia mínima entre circulo1 e circulo2 = %lf\n", distanciaMinimaCirculos);    
  
  // finalização do programa
  
  return 0;
}

/* 
  Nome: leiaCirculo
  Objetivo: ler os dados de um círculo, ou seja, ler as
            coordenadas de seu ponto central e o valor
            do seu raio.
  Parâmetro Formais
  - circulo: circulo que terá os seus dados lidos
             (parâmetro de saída de dados)
  Valor de retorno: nenhum.
 */

void leiaCirculo(tCirculo *circulo)
{
  printf("Digite as coordenadas do circulo:\n");
  printf("Digite o valor da coordenada x: ");
  // scanf("%lf", &(*circulo).centro.x);
  scanf("%lf", &circulo->centro.x);
  printf("Digite o valor da coordenada y: ");
  // scanf("%lf", &circulo->centro.y);
  scanf("%lf", &(*circulo).centro.y);
  printf("Digite o valor do raio do circulo: ");
  // scanf("%lf", &(*circulo).raio);
  scanf("%lf", &circulo->raio);

}

/* 
  Nome: escrevaCirculo
  Objetivo: escrever os dados de um círculo, ou seja, as
            coordenadas de seu ponto central e o valor
            do seu raio.
  Parâmetro Formais
  - c: circulo que terá os seus dados escritos
             (parâmetro de entrada de dados)
  Valor de retorno: nenhum.
 */
 
void escrevaCirculo(tCirculo c)
{
  printf("Dados do circulo:\n");
  printf("Coordenada x = %.2lf\n", c.centro.x);
  printf("Coordenada y = %.2lf\n", c.centro.y);
  printf("Raio = %.2lf\n", c.raio);
}

/* 
  Nome: calcAreaCirculo
  Objetivo: calcular a área de um circulo
  Parâmetro Formais
  - r: raio do círculo
  Valor de retorno: área do círculo
 */
 
 double calcAreaCirculo(double raio){
    double aCir;
    
    aCir=(double)PI*pow(raio,2);
    
    return aCir;
 }
 
 /* 
  Nome: calcPerimetroCirculo
  Objetivo: calcular o perímetro de um círculo
  Parâmetro Formais
  - r: raio do círculo
  Valor de retorno: perímetro do círculo
 */
 double calcPerimetroCirculo(double raio){
    double per;
    
    per=(double)2*PI*raio;
    
    return per;
 }
 
 /* 
  Nome: calcDdistanciaCentroCirculos
  Objetivo: calcular a distancia entre o centro de dois círculos
  Parâmetro Formais
  - p1,p2: ponto do centro de dois círculos
  Valor de retorno: distância entre o centro de dois círculos.
 */
 
double calcDistanciaCentroCirculos(double x1, double y1, double x2, double y2){
     
    double distCenCir;
    
    distCenCir=(double) sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    return distCenCir;
}
 /* 
  Nome: calcDistanciaCirculoRaio
  Objetivo: calcular a distância miníma entre dois círculos
  Parâmetro Formais
  - c: circulo que terá os seus dados escritos
             (parâmetro de entrada de dados)
  Valor de retorno: nenhum.
 */
 
 double calcDistanciaMinimaCirculos (double distCentroCirculos,double raio1, double raio2){
     
    double distMinCir,subtCenCir;
    
    subtCenCir=distCentroCirculos-raio1-raio2;
    
    if(subtCenCir>0){
        distMinCir=subtCenCir;
    }
    else{
        distMinCir=0;
    }
    
    return distMinCir;
 }
