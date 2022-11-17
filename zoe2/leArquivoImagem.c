#include "libTrabalho.h"
/*
 * Completo....
 */
/****** Completar *****/
int **leArquivoImagem (char *nomeArqEntrada, char *tipo, int *lin, int *col, int *maxval){
   int **mat;
   
   int i, j, temp;
   FILE *arquivo = fopen(nomeArqEntrada, "r");
   if(arquivo == NULL){
      printf("Houve um erro ao abri o arquivo.\n");
      return NULL;
   }
   
   fscanf(arquivo,"%s",tipo); //coletando informação do tipo
   fscanf(arquivo,"%d %d",col, lin);//coletando informação da linha e coluna
   fscanf(arquivo,"%d",maxval);//coletando informação do maxval

   //alocando uma matriz tamanho lin e col
    mat = alocaMatrizImagem(*lin, *col);
    if(mat == NULL){
      return NULL;
   }

   //coletando todos os pixes da matriz da imagem e inserindo na matriz alocada
    for(i = 0; i < *lin; i++){
        for(j = 0;j < *col; j++){
            fscanf(arquivo,"%d",&mat[i][j]);
        }
    }
    fclose(arquivo);
    return mat;
}

