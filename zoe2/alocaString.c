#include "libTrabalho.h"
/*
 * Completo....
 */

char *alocaString(int size){

   char *st; 
   st = (char *)malloc(size*sizeof(char ));
   if(st == NULL){
      printf("Falha ao alocar memória, encerrando programa!\n");
      return NULL;
   }
   return st;
}
