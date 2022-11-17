#include "libTrabalho.h"

/****** Completar *****/
int cadastraImagem(char arqFisicoImagensBase[], char nomeImagem[]){ 
	
	 /*
	 typedef struct imagem{
		char nome[40];
		int id;
		//Neste trabalho, o tipo considerado é PGM
		char tipo[7];
		int size;
		Dimension dimensao;
		char proprietario[MAX_NAME]; 
		Data data_criacao;
		Data data_modificacao;
	} Imagem;
	 */                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
	
	char nome[40];

	if(verificaExistenciaDeImagem(nomeImagem) == 0){
		return -1;
	}
   	if(verificaCadastro(arqFisicoImagensBase, nomeImagem) == 1){
		return 1;
	}

	Imagem img;
	int altura;
	int retornoGrava;
	//char *extension;

	printf("\nInforme o nome do proprietário da imagem:\n");
	scanf("%s", img.proprietario);

	//pega nome da image no nomeImagem
	strcpy(img.nome, nomeImagem);

	//pega o idda imagem na função getLastId
	img.id = getLastId(arqFisicoImagensBase) + 1;

	//pega o tipo o tipo da imagem que e PGM na função getExtension
	getExtension(nomeImagem, img.tipo);
	
	img.size = getSize(nomeImagem);
	img.dimensao.largura = getDimension(nomeImagem, &altura);
	img.dimensao.altura = altura;
	
	struct tm tm = getSystemTime();
	img.data_criacao.dia = img.data_modificacao.dia = tm.tm_mday;
	img.data_criacao.mes = img.data_modificacao.mes = tm.tm_mon + 1;
	img.data_criacao.ano = img.data_modificacao.ano = tm.tm_year + 1900;

	retornoGrava = gravaInfoImagem(arqFisicoImagensBase, img);

  return retornoGrava;
}