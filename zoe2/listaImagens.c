#include "libTrabalho.h"

/****** Completo *****/
void listaImagens(char arqFisicoImagensBase[]){

   FILE *arq=fopen(arqFisicoImagensBase, "a+b");
   if(arq == NULL){
      printf("\nErro ao abrir arquivo - alteraImagem\n");
      return;
   }
   //descola ponteiro para início do arquivo (a+ abre arquivo no final)
   rewind(arq);
   Imagem img;

   while((fread(&img, sizeof(Imagem), 1, arq) != 0)){
     printf("\n---------------------------------------\n");
      printf(" -> Nome da Imagem: %s\n", img.nome);
      printf(" -> ID da Image: %d\n", img.id);
      printf(" -> Dimensoes da imagem: %dx%d\n", img.dimensao.altura, img.dimensao.largura);
      printf(" -> Tamanho da imagem: %d bytes\n", img.size);
      printf(" -> Proprietario da imagem: %s\n", img.proprietario);
      printf(" -> Data da criacao: %d/%d/%d\n", img.data_criacao);
      printf(" -> Data de modificacao: %d/%d/%d\n", img.data_modificacao);
        printf("---------------------------------------\n");
      printf("\n\n");
   }
   fclose(arq);
}
