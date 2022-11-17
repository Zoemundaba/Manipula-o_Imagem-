#include "libTrabalho.h"
/*
 * Completo....
 */

void ruido (int **mat, int lin, int col){
    int **matriz = copiaMatrizImagem(mat, lin, col);
    int i, j;
    int random = 0; 
    //obtem um valor random diferente de zero
    while(random == 0)random = rand() % 100;

    for(i = 0; i < lin; i++){
        for(j = 0;j < col; j++){
            //Neste passo analisamos se o calculo 
            if(random + mat[i][j] > 255)matriz[i][j] = 255;
            else matriz[i][j] = random + mat[i][j]; 
        }
    }
   
}
