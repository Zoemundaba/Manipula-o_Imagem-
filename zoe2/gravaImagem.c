#include "libTrabalho.h"
/*
 * Completo....
 */
/****** Completar *****/
int gravaImagem (char *nomeArqSaida, char *tipo, int lin, int col, int maxval, int **mat){
   FILE *arquivo;
   int i, j;
   arquivo = fopen(nomeArqSaida, "w");
   if(arquivo == NULL){
      printf("Erro na leitura do arquivo\n");
      return 1;
   }
   fprintf(arquivo, "%s\n", tipo); //inserindo o tipo
   fprintf(arquivo,"%d %d\n",col, lin); //inserindo a linha e coluna
   fprintf(arquivo,"%d\n", maxval); //inserindo valor de maxval
   //adicionado ao arquivo a matriz a qual foi realizada uma operação
    for(i = 0; i < lin; i++){
        for(j = 0;j < col; j++){
            fprintf(arquivo,"%d ",mat[i][j]);
        }
        fprintf(arquivo, "%c", "\n");
    }
    //desenvolvimento do arquivo concluido seguindo o padrão pgm
    fclose(arquivo);
   
   return 0;
}
