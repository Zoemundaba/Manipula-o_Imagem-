#include "libTrabalho.h"
/*
 * Completo mas falta algumas coisas....
*/

int **copiaMatrizImagem (int **mat,  int lin, int col){

   int **matCopia;
   matCopia = alocaMatrizImagem(lin, col);
   int i, j;
   for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            matCopia[i][j] = mat[i][j];
        }
    }
    return matCopia;
}




