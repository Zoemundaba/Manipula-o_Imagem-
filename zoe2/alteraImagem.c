
#include "libTrabalho.h"
/*
 * Comentário....
 */
void alteraImagem(char arqFisicoImagensBase[], int id){

   FILE *arq = fopen(arqFisicoImagensBase,"a+b");
   if (arq == NULL){
      printf("\nErro ao abrir arquivo - removeImagem\n");
      return;
   }
   //descola ponteiro para início do arquivo (a+ abre arquivo no final)
   rewind(arq);

   //Usa um arquivo temporário para copiar (da base) somente os arquivos
   //com id diferente do id a ser alterado
   FILE *arqTmp = fopen ("tmp.bin", "wb");
   if (arqTmp == NULL){
      printf("\nErro ao abrir arquivo - removeImagem\n");
      return;
   }

   int achou = 0;
   Imagem img;
   //Percorre todas as imagens cadastradas na base copiando para o arquivo arq
   // * temporário as imagens com id != do id a ser alterado.
   while( (fread(&img, sizeof(Imagem), 1, arq) != 0)){
      //img.id não é a imagem a ser removida
      if (img.id != id){
         //Copia imagem com img.id != id para o arquivo temporário
         fwrite(&img, sizeof(Imagem), 1, arqTmp);
      }else{
         //Encontrou a imagem com id a ser alterado na base
            achou = 1;
            printf("\nImagem %s (id: %d) encontrada", img.nome, img.id);
            printf("Informe o nome do proprietatio\n");
            scanf("%s", img.proprietario);

            struct tm tm = getSystemTime();
            img.data_modificacao.dia = tm.tm_mday;
            img.data_modificacao.mes = tm.tm_mon + 1;
            img.data_modificacao.ano = tm.tm_year + 1900;

            //dataHora = getSystemTime();
            //img.data_modificacao = dataHora;

            fwrite(&img, sizeof(Imagem), 1, arqTmp);
      }
   }

   fclose(arq);
   fclose(arqTmp);

   if (!achou){
      printf("\nRemoção não realizada. Imagem com ID %d inexistente na base.\n",id);
      remove("tmp.bin");
      return;
   }

   //Remove o arquivo original (arqFisicoImagensBase) do diretório corrente
   remove(arqFisicoImagensBase);
   //Renomeia o arquivo temporário tmp.bin para arqFisicoImagensBase, ou seja, com imagem (img.id=id) já "removida"
   rename("tmp.bin",arqFisicoImagensBase);
}






