#include "libTrabalho.h"
/*
 * Comentário....
 */
int getLastId(char arqFisicoImagensBase[]){
    int lastId = 0;

   FILE *arq = fopen(arqFisicoImagensBase, "a+b");
   if(arq == NULL){
      printf("Erro ao abrir arquivo\n");
      return 0 ;
   }
   rewind(arq);
   Imagem img;
   //lastId;
   int id = 0;
   while((fread(&img, sizeof(img), 1, arq) != 0)){
      id = img.id;
   }
   lastId = id;
   fclose(arq);

   return lastId;
}
