/*
Autor: Vinícius Marto da Veiga
RA: 821252
Data: 23/08/2021
*/
// Bibliotecas
#include <stdio.h>    // Manipula ‹o de arquivos
#include <stdlib.h>

// Constantes
#define N 10 // Numero de elementos

// Programa principal
int main(int argc, char *argv[])
{

  int vetor1[N]; // vetor para grava ‹o dos dados no arquivo
  int vetor2[N]; // vetor para leitura dos dados do arquivo
  int i;          // contador de la o

  FILE *lf; // ponteiro para um arquivo l—gico (lf = logical file)

  // criar um arquivo l—gico
  // 1. associar lf com teste.dat
  // 2. w+b = criar arquivo sem nenhum conteœdo no modo bin‡rio
  //          com permiss‹o para escrita e leitura
  lf = fopen("teste.bin", "w+b");

  if (lf == NULL)
  {
     printf("Erro na criacao do arquivo ... \n\n");
     system("PAUSE");
     return 0;
  }

  // inicializa ‹o de um vetor
  for(i = 0; i < N; i++)
    vetor1[i] = i;

// escrita dos dados de um vetor 1
  printf("\n");
  printf("Os dados do vetor 1 sao:\n\n");
  for(i = 0; i < N; i++)
    printf("vetor[%d] = %d\n", i, vetor1[i]);
  printf("\n");

  // grava ‹o de dados em disco (1)
  for(i = 0; i < N; i++)
    fwrite(&vetor1[i], sizeof(int), 1, lf);
  fflush(lf);
  // grava ‹o de dados em disco (2)
  /*
  fwrite(&vetor1[0], sizeof(int), 1, lf);
  fflush(lf);
  fwrite(&vetor1[1], sizeof(int), 1, lf);
  fflush(lf);
  fwrite(&vetor1[2], sizeof(int), 1, lf);
  fflush(lf);
  fwrite(&vetor1[3], sizeof(int), 1, lf);
  fflush(lf);
  fwrite(&vetor1[4], sizeof(int), 1, lf);
  fflush(lf);
  fwrite(&vetor1[5], sizeof(int), 1, lf);
  fflush(lf);
  fwrite(&vetor1[6], sizeof(int), 1, lf);
  fflush(lf);
  fwrite(&vetor1[7], sizeof(int), 1, lf);
  fflush(lf);
  fwrite(&vetor1[8], sizeof(int), 1, lf);
  fflush(lf);
  fwrite(&vetor1[9], sizeof(int), 1, lf);
  fflush(lf);
  */
  // retornar ao in’cio do arquivo
  // retorna a posição 0 do arquivo
  fseek(lf, 0, SEEK_SET); // rewind(lf);

  // leitura de dados (1)
  for(i = 0; i < N; i++)
    fread(&vetor2[i], sizeof(int), 1, lf);
  //leitura de dados (2)
  /*
  fread(&vetor2[0], sizeof(int), 1, lf);
  fread(&vetor2[1], sizeof(int), 1, lf);
  fread(&vetor2[2], sizeof(int), 1, lf);
  fread(&vetor2[3], sizeof(int), 1, lf);
  fread(&vetor2[4], sizeof(int), 1, lf);
  fread(&vetor2[5], sizeof(int), 1, lf);
  fread(&vetor2[6], sizeof(int), 1, lf);
  fread(&vetor2[7], sizeof(int), 1, lf);
  fread(&vetor2[8], sizeof(int), 1, lf);
  fread(&vetor2[9], sizeof(int), 1, lf);
  */
  // escrita dos dados de um vetor
  printf("\n");
  printf("Os dados do vetor 2 sao:\n\n");
  for(i = 0; i < N; i++)
    printf("vetor[%d] = %d\n", i, vetor2[i]);
  printf("\n");

  // fechamento do arquivo
  fclose(lf);

  system("PAUSE");
  return 0;
}