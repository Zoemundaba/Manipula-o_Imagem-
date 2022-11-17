#include "libTrabalho.h"
/*
 * Comentário....
 */
/****** Completar *****/
int gravaInfoImagem(char arqFisicoImagensBase[], Imagem img){


   FILE *arquivoOriginal = fopen(arqFisicoImagensBase,"a+b");

   if(arquivoOriginal == NULL){
      printf("Erro ao abrir arquivo\n");
      return -1;
   }
   //levaPonteiroParaInicioDoArquivo(ponteiroDoArquivo);
  // rewind(arquivoOriginal);

   fwrite(&img,sizeof(Imagem),1, arquivoOriginal);
   fclose(arquivoOriginal);

   return 0;
}

/*typedef struct imagem{
char nome[40];
int id;
//Neste trabalho, o tipo considerado é PGM
char tipo[7];
int size;
Dimension dimensao;
char proprietario[MAX_NAME];
Data data_criacao;
Data data_modificacao;
} Imagem;*/
