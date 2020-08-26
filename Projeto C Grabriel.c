#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include<stdbool.h>

typedef struct{
	int cor;
}Cores;

Cores *setColor(int color){
	
	Cores *pCor = (Cores*) malloc(sizeof(Cores));
	pCor->cor = color;
	
	return pCor;
}

void exibirCores(Cores *listaCores[], int intervalo){
	int i;
	
	printf("\n ---> LISTA DE CORES <---\n");
	
	//exibe a lista de cores em um intervalo de 1seg
	for(i=0; i<intervalo; i++){
		
		sleep(1);
		printf("\n            %d", listaCores[i]->cor);
	}
}

bool compararValor(int v1, int v2){
	
	bool status = false;
	
	//Verifica se os numeros são iguais
	if(v1 == v2){
		
		status = true;
	}
	
	return status;
}

int main(void){
	
	Cores *listaCores[100];
	Cores *user[100];
	
	int i;
	srand(time(NULL));

	for(i=0; i<100; i++){
		
		int corSorteada = rand() % 5;
		
		listaCores[i] = setColor(corSorteada);	
	}
	
	//aguarda 1seg para limpar a tela e o usuario jogar
	sleep(1);
	
	//permicao para continuar sorteando
	bool status = true;
	
	for(i=4; i<100; i++){
		
		system("cls");
		
		//Exibi a lista de cores
		exibirCores(listaCores, i);
		
		system("cls");
		printf("\n -------- > SUA VEZ < -------- \n");
		
		//Varre as Posicoes e comparando
		int c;
		for (c=0; c<i; c++){
			int valorUser;
			
			printf("\n           >> ");
			scanf("%d", &valorUser);
			
			//funcao de comparação
			if(!compararValor(valorUser, listaCores[c]->cor)){
				status = false;
				break;
			}
				
		}
		
		if(!status)
			break;
	}
	
	printf("\n\n                         ------------- > YOU LOSE :( < ------------- \n");
	
	//system("cls");
	//Pega as 4 cores primarias sorteadas pelo sistema
	
	
	return 0;
}
