#include "libTrabalho.h"


void getExtension(char nomeImagem[], char extension[]){

  int i = 0, j = 0;
  while(nomeImagem[i] != '.'){ 
    i++;
  }

  while(nomeImagem[i] != '\0'){ 
    extension[j] = nomeImagem[i];
    i++;
    j++;
  }
  extension[j] = '\0';
}



