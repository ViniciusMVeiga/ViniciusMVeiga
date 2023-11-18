/*
  Autor: Prof. Ricardo Rodrigues Ciferri
  Data: 12/09/22
  
  Atualização:
  Autor: Vinícius Marto da Veiga
  RA: 821252
  Data: 23/08/2023
  
  Objetivo: apresentar o conceito de arquivo texto
            com a escrita e leitura de linhas, além
            do uso da função feof().
            
  Observação: código baseado no site cplusplus.com .

*/

#include <stdio.h>

int main()
{
   // declarações locais
   FILE *pFile;
   char buffer[100];

   // criação do arquivo texto
   // atenção ao uso do "t"
   pFile = fopen("myfile.txt" , "w+t");
   if (pFile == NULL) 
   {
      perror ("Error opening file");
      return 0;
   }
   
   // escrita de linhas no arquivo
   fprintf(pFile, "Palmeiras tem Mundial\n");
   fprintf(pFile, "Palmeiras foi o primeiro time Campeão Mundial\n");
   fprintf(pFile, "Corinthians é freguês do Palmeiras\n");
   fprintf(pFile, "FREGUÊS bom é freguês FIEL\n");
   fprintf(pFile, "Palmeiras é freguês do São Paulo\n");
   fprintf(pFile, "São Paulo ganhou do Corinthians na Copa do Brasil\n");
   fprintf(pFile, "Red Bull está melhor colocado que São Paulo, Corinthians e Santos no Campeonato Brasileiro\n");
   
   // retorno ao início do arquivo
   fseek (pFile , 0 , SEEK_SET); //<=> ou usar rewind(pFile)

   // leitura dos dados enquanto tiver linhas
   while ( ! feof (pFile) )
   {
      if ( fgets (buffer , 100 , pFile) == NULL ) 
         break;
      fputs (buffer , stdout);
   }    
   
   // fechamento do arquivo
   fclose (pFile);
   
   // finalização do programa
   return 0;
}