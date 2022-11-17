#include "libTrabalho.h"
/*
 * Comentário....
 */

void negativo (int **mat, int lin, int col){

   int** matriz = copiaMatrizImagem(mat, lin, col);
    int i, j;
    for(i = 0; i < lin; i++){
        for(j = 0;j < col; j++){
            /*
            A operação negativo representa o extremo de cada valor, exemplo, caso o valor do pixel seja
            255 então agora ele será 0 na nova matriz, do mesmo modo caso o valor do pixel sejá 0 agora ele será 255 na
            nova matriz.
            Por fim, caso ele não satisfaça nenhum dos valores extremos, então subtraimos o valor pelo limitante
            255, obtendo assim seu negativo. Exemplo, caso pixel seja 100, então faremos 255-100 = 155, o qual será o
            novo valor inserido na nova matriz.
            */
            if(mat[i][j] == 255) matriz[i][j] = 0;
            else if(mat[i][j] == 0)matriz[i][j] = 255;
            else matriz[i][j] = (255 - mat[i][j]);
        }
    }
}
