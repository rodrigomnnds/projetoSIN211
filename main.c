#include <stdio.h>
#include <stdlib.h>
#include "./funcoes.c"
int main(){


	Carta *nova_carta;
	nova_carta = (Carta*)malloc(sizeof(Carta));
	nova_carta->valor = 1;
	nova_carta->nipe = 1;
	teste(nova_carta);
	return 0;
}


/*
#include <stdio.h>
#include <stdlib.h>
#include "Estruturas_de_Dados.c"
//#include "Estrutura_Carta.h"

typedef struct sCarta{
	int valor;
	int nipe;
}Carta;


int main(){
	Nopilha *pilha;
	pilha = inicializar();
	if (isVazia(pilha))
		printf("pilha vazia\n");
		pilha = inicializar();
	Carta nova_carta;
	nova_carta.valor = 10;
	nova_carta.nipe = 1;
	if (isVazia(pilha))
		printf("pilha vazia\n");
	return 0;
}

*/