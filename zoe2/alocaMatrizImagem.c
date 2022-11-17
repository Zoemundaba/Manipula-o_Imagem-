
#include "libTrabalho.h"

//Completo....

int **alocaMatrizImagem (int lin, int col){

   int i, j; 
   int **mat;
  /*
    aloca vetor principal da matriz
    []
    [] 
    []...
  */
   mat = (int **)malloc(sizeof(int *)*lin);
  if(mat == NULL){
        printf("Memoria insuficiente no aloca matriz\n");
        return NULL;
  }

  for(i = 0; i < lin;i++){
   mat[i] = (int *) malloc(col*sizeof(int));
   if(mat[i] == NULL){
    printf("Erro ao alocar linhada matriz\n");
    desalocaMatrizImagem(mat,i, col);
   }
  }
  return mat;
} 

//================================================
//quer que leia arquivo









/*int **mat ;
int i, j ;

// aloca um vetor de LIN ponteiros para linhas
mat = malloc (LIN * sizeof (int*)) ;

// aloca cada uma das linhas (vetores de COL inteiros)
for (i=0; i < LIN; i++)
   mat[i] = malloc (COL * sizeof (int)) ;

// percorre a matriz
for (i=0; i < LIN; i++)
   for (j=0; j < COL; j++)
      mat[i][j] = 0 ;        // acesso com sintaxe mais simples

// libera a memória da matriz
for (i=0; i < LIN; i++)
   free (mat[i]) ;
free (mat) ;*/
