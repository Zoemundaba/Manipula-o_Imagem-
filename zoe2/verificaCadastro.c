#include "libTrabalho.h"
/*
 * Comentário....
 */
/****** Completar *****/
int verificaCadastro(char arqFisicoImagensBase[], char nomeImagem[]){


   FILE *arquivo = fopen(arqFisicoImagensBase, "a+b");

   if(arquivo == NULL){
      printf("Houve um erro ao abri o arquivo.\n");
      return 0 ;
   }
   //levaPonteiroParaInicioDoArquivo(ponteiroDoArquivo);
   rewind(arquivo);

   Imagem imagem;
   int encontrou = 0;

   while (fread(&imagem, sizeof(Imagem), 1, arquivo) != 0 && ! encontrou){

      if(strcmp(imagem.nome, nomeImagem) == 0){
         encontrou = 1;
      }
   }
if(encontrou){
   return 1;
}else 
return 0;
fclose(arquivo);

return encontrou;

}
