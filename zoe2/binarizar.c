#include "libTrabalho.h"
/*
 * Completo....
 */
void binarizar (int **mat, int lin, int col){
    int i,j;
    for(i = 0; i < lin; i++){
        for(j = col-1 ;j >- 1; j--){
            if(mat[i][j] > 127){
                mat[i][j] = 255;
            }else{
                mat[i][j] = 0;
            }
        }
    }
}


