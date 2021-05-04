#include <stdio.h>
#include <stdlib.h>
#include "./Estrutura_Carta.h"
//--------------------------------------------
//pilha
//--------------------------------------------
typedef struct sNopilha{
	Carta carta;
	int tam_atual;
	int tam_max;
	struct sNoPilha *prox;
}Nopilha;

Nopilha *inicializar(){
	Nopilha *novoNoPilha = (Nopilha*)malloc(sizeof(Nopilha));
	novoNoPilha->prox = NULL;
	novoNoPilha->tam_atual = 0;
	return novoNoPilha;
}

int isVazia(Nopilha *ptr_externo_pilha){
	if(ptr_externo_pilha->prox == NULL){
		return 1;
	}
	else{
		return 0;
	}
}

Nopilha *push(Nopilha *ptr_externo_pilha, Carta carta){
	Nopilha *novoNoPilha;
}




