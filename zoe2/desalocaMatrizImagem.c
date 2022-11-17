#include "libTrabalho.h"
/*
 * Completo....
 */

void **desalocaMatrizImagem(int **mat, int lin, int col){
   int i, j;
   //laço libera todas as colunas linha a linha da matriz
   for(i = 0; i < lin; i++){
      free(mat[i]);
   }
  free(mat);
}

