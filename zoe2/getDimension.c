
 #include "libTrabalho.h"

/****** Completo *****/

int getDimension(char nomeImagem[], int *pAltura){
	
	int largura;

	FILE *img = fopen(nomeImagem, "r");
   if(img == NULL){
      printf("Erro ao abrir arquivo\n");
      return 0 ;
   }

	char str[3];
   //leitura do P2
   fscanf(img, "%s", str);
   //leitura da altura
   fscanf(img, "%d", &largura);
   //leitura da largura
   fscanf(img, "%d", pAltura);

   fclose(img);

	return largura;
}




/*
int getDimension(char nomeImagem[], int *pAltura){

   FILE *arq = fopen(arqFisicoImagensBase, "a+b");
   if(arq == NULL){
      printf("Erro ao abrir arquivo\n");
      return 0 ;
   }

   if(nomeImagem == P2){
       fscanf("%d", &Dimension.largura);
       fscanf("%d", &Dimension.altura);

   pAltura = Dimension.altura;

   }

   fclose(arq);

return largura;
}
*/



















/*#include "libTrabalho.h"

int getDimension(char nomeImagem[], int *pAltura){
   int largura;
   char c;
   FILE *imagem = fopen(nomeImagem,"a+b");

   fscanf("%s",imagem);
   ======================
      Este fragmento representa um loop que lê caractere por caractere do PGM inserido.
      Não sei se essa é a melhor estratégia, mas deve funcionar.
      Conte quantos caracteres devem ser lidos antes de obter a largura e altura do PGM.
      Essas informações estão sempre na segunda linha do arquivo.

     'N' é o número de caracteres a serem lidos (em fopen há algo semelhante...)
   */

 // Implemente a função converteparanumero() pAltura = converteParaNumero(c);
// Implemente a função converteparanumero() fscanf(c, 2, imagem);

 // Implemente a função converteparanumero()  largura = converteParaNumero(c);

// Implemente a função converteparanumero()   fclose(imagem);

// Implemente a função converteparanumero()	return largura;
//}


//pseudo-codigo

//funcao getDimension(String nomeImagem, Ponteiro pAltura ) {

   //Numero largura;
   //ARQUIVO *imagem = abreArquivo(nomeImagem);
   // d'après ce que j'ai vu dans la documentation,
   // le fichier doit être dans le même dossier que main.

   //Caracter c;

   //leCaracteresDaImagem(c, N, imagem);
   /*
    
      Cet extrait représente une boucle qui lit caractère par caractère à partir du PGM entré.
      Je ne sais pas si c'est la meilleure stratégie, mais ça devrait marcher.
      Comptez combien de caractères doivent être lus avant d'obtenir la largeur et la hauteur du PGM.
      Cette information est toujours sur la deuxième ligne du fichier.

      'N' est le nombre de caractères à lire (en fopen il y a quelque chose de similaire, non ?)
   */
   //pAltura = converteParaNumero(c);
   // Ici, un casting peut résoudre...
   //leCaracteresDaImagem(c, 2, imagem);

   //largura = converteParaNumero(c);

  // fechaArquivo(imagem);

   //return largura;
//}

