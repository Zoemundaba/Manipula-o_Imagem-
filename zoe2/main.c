//libTrabalho.h � inclusa para que a fun��o main tenha acesso �s fun��es, registros e constantes definidos.
#include "libTrabalho.h"

int main(){

   //=======Vari�veis para cadastro na base
  //arqFisicoImagensBase.txt armazena todas as informa��es sobre as imagens cadastradas.
  char arqFisicoImagensBase[] = "arqFisicoImagensBase.bin";
  int id;
  char nomeImagem[MAX_NAME];

   //======Vari�veis para opera��es sobre imagens
   int opt = 1, lin, col, maxval, gravou;
   char *tipo, *nomeArqSaida;
   int **matImagem;
   char *auxNomeImagem;
   Imagem img;
   int retorno = 0;
  do{
     //Fun��o que mostra as op��es para o usu�rio ao executar o programa
     menuOperacoes();
     scanf("%d", &opt);
     
     switch (opt){
	     case 0: printf("Tchau!\n");
	     break;
	     //===listaImagens
	     case 1: printf("\tLISTA IMAGEM CADASTRADA\n");
	     		listaImagens(arqFisicoImagensBase);
	     break;
	     //===cadastraImagem
	     case 2: printf("\tCADASTRAR IMAGEM\n");
	     		printf("Digite o nome da imagem a cadastra: ");
	    		scanf("%s", nomeImagem);

	     		retorno = cadastraImagem(arqFisicoImagensBase, nomeImagem);
	     		if(retorno == 1){
				printf("No foi possivel cadastra pois o arquivo j est cadastrasdo");
	     		}else 
			if(retorno == 0){
				printf("Arquivo cadastrado com sucesso");
	     		}else{
				printf("Erro ao cadastra");
	    		}
		break;
            //===alteraImagem
	      case 3: printf("\tID DA IMAGEM PARA ALTERAR: \n");
			scanf("%d", &id);
	      	alteraImagem(arqFisicoImagensBase, id);
		break;
            //===removeImagem
	      case 4: printf("\nID DA IMAGAM A REMOVER: ");
			scanf("%d",&id);

		      removeImagem(arqFisicoImagensBase, id);
		break;
            //===Binarizar
	      case 5: auxNomeImagem = alocaString(40);

		printf("\tNOME DA IMAGEM A BINARIZAR: ");
		scanf("%s", auxNomeImagem);

		tipo = alocaString(3);
		matImagem = leArquivoImagem(auxNomeImagem, tipo, &lin, &col, &maxval);
		binarizar(matImagem, lin, col);
		//printf("Digite o nome da imagem binarizada: ");
		//scanf("%s", auxNomeImagem);
		retorno = gravaImagem(auxNomeImagem, tipo, lin,col, maxval, matImagem);
		if(retorno == 0){
			printf("Imagem binarizada é gravada com sucesso!");
		}else {
			printf("Image binarizada não foi gravada :(");
		}
		desalocaMatrizImagem(matImagem, lin, col);
	
		free(tipo);
		free(auxNomeImagem);
		
		break;
	      //===Ruido
	      case 6: printf("\tRUIDO SOBRE IMAGEM(por nome)\n");
	    	      ruido(matImagem, lin, col);
		break;
	      //===Negativo
	      case 7: printf("\tNEGATIVO DA IMAGEM(por nome): \n");
		scanf("%s", nomeImagem);

	            negativo(matImagem, lin, col);
		break;
	      //====Espelhamento
	      case 8: printf("\tESPELHAR IMAGEM(por nome)\n");
		scanf("%s", nomeImagem);
	            espelhar(matImagem, lin, col);
		break;
	      default: printf("\rOPÇÂO INVALIDA\n");
	}
	}while (opt != 0);

	return 0;
}
