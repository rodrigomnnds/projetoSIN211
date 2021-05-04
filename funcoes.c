#include <stdio.h>
#include <stdlib.h>
#include "./Estruturas_de_Dados.c"
#include "./config.h"

void printa_carta(Carta *carta){

/*

	Printa uma única carta com cor e unicode para simbolizar o nipe, caso seja possível.
	Recebe como argumento uma estrutura do tipo Carta, formada por:
		valor: valor inteiro, de 1 a 13 que representa a parte numérica de uma carta.
		Alguns valores especiais:
			1 = A.
			11 = J.
			12 = Q.
			13 = K.
		nipe: valor inteiro que representa o nipe de uma carta, sendo eles:
			0: espadas.
			1: copas.
			2: paus.
			3: ouros.
*/

	//define a cor da carta ao ser printada, baseada no nipe da mesma (C, O = vermelha. E, P = azul).
	if(USAR_CORES){
		if(carta->nipe == 0 || carta->nipe == 2){printf(ANSI_COLOR_BLUE);}
		else if(carta->nipe == 1 || carta->nipe == 3){printf(ANSI_COLOR_RED);}
	}

	//printa o valor da carta, fazendo as alterações necessárias (A, J, Q, K).
	if(carta->valor == 1){printf("A ");}
    else if(carta->valor == 11){printf("J ");}
    else if(carta->valor == 12){printf("Q ");}
    else if(carta->valor == 13){printf("K ");}
	else{
    	if(carta->valor < 10){printf("%d ",carta->valor);}
    else{printf("%d",carta->valor);}
	}

	//printa o nipe da carta
	//printa o nipe das cartas usando unicode.
	if(USAR_UNICODE){
	  	if(carta->nipe == 0){printf(ESPADAS);}
	  	else if(carta->nipe == 1){printf(COPAS);}
		else if(carta->nipe == 2){printf(PAUS);}
		else{printf(OUROS);}

	}
	//printa o nipe das cartas usando caracteres ASCII normais (E,C,P e O).
	else if (!USAR_UNICODE){
		if(carta->nipe == 0){printf("E\t");}
		else if(carta->nipe == 1){printf("C\t");}
		else if(carta->nipe == 2){printf("P\t");}
		else{printf("O\t");}
	}
	//reseta as cores padrões caso seja necessário.
	if(USAR_CORES){
		printf(ANSI_COLOR_RESET);
	}
}

void limpar_tela(){
/*
	Limpa o terminal de acordo com o comando definido em ./config.h
*/
	system(LIMPAR);

}
void teste(Carta *carta){
	printf("%d\n",carta->valor);
	printf("%d\n",carta->nipe);
}
