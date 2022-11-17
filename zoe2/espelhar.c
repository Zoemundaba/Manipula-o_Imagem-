#include "libTrabalho.h"
/*
 * Completo....
*/

void espelhar (int **mat, int lin, int col){
   int** matriz = copiaMatrizImagem(mat, lin, col);
   int i, j ,op;

   //sentido da esquerda para a direita da matriz original (sentido normal)
    for(i = 0; i < lin; i++){
        op = 0;
        //sentido da direita pra esquerda da matriz original (sentido contrário)
        for(j = col-1;j>-1; j--){
            matriz[i][op] = mat[i][j];
            op++;
        }
    }

}

