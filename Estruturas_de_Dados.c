#include <stdio.h>
#include <stdlib.h>
#include "./Estrutura_Carta.h"
//--------------------------------------------
//pilha
//--------------------------------------------
typedef struct sNo_pilha{
	Carta carta;
	int n_cartas;
	int n_max_cartas;

}No_pilha;

void pilha_alocar_no(No_pilha *ptr_externo_pilha){
	ptr_externo_pilha = (No_pilha*)malloc(sizeof(No_pilha));
}

void pilha_inicializar(No_pilha **ptr_externo_pilha, int n){
	pilha_alocar_no(*ptr_externo_pilha);
	//foo->bar is equivalent to (*foo).bar, i.e. it gets the member called bar from the struct that foo points to.
	//não sei pq não funciona com:
	//*ptr_externo_pilha->n_max_cartas = n;
	(*ptr_externo_pilha)->n_max_cartas = n;
	(*ptr_externo_pilha)->n_cartas = 0;

	
}
int pilha_is_vazia(No_pilha *ptr_externo_pilha){
	if(ptr_externo_pilha->n_cartas == 0){
		return 1;
	}
	else{
		return 0;
	}
}
int pilha_is_cheia(No_pilha *ptr_externo_pilha){
	if(ptr_externo_pilha->n_cartas == ptr_externo_pilha->n_max_cartas){
		return 1;
	}
	else{
		return 0;
	}
}
void pilha_push(){}
void posh_push(){}
void peek(){}
//--------------------------------------------
//fila
//--------------------------------------------
//--------------------------------------------
//deque
//--------------------------------------------


int main(){
	No_pilha *ptr_externo_pilha;
	pilha_inicializar(&ptr_externo_pilha, 0);
	if(pilha_is_cheia(ptr_externo_pilha)){
		printf("A fila foi alocada com sucesso e está cheia\n");
	}



};



