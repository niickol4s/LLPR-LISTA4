/* Quest�o 1: Escreva um programa que declare um array de inteiros com 5 elementos e um ponteiro para o primeiro elemento do array. 
Em seguida, preencha o array com valores informados pelo usu�rio e imprima esses valores utilizando o ponteiro. 
Ao final, mostre em tela cada valor armazenado e seu respectivo endere�o de mem�ria.*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int array[5]; // Vetor do tipo inteiro de cinco posi��es
	int *ponteiro; // Ponteiro do tipo inteiro
	
	printf("\nQuest�o 1");
	
	for(int i = 0; i < 5; i++) { // For para a leitura das posi��es do vetor
		printf("\nInsira o %d� valor: ", i + 1);
		scanf("%d", &array[i]);
	}
	
	ponteiro = array; // Endere�o do ponteiro recebe o primeiro �ndice do vetor
	
	for(int i = 0; i < 5; i++) { // For para impress�o
		printf("\n%d� Valor: %d | Endere�o: %p", i + 1, *(ponteiro + i), (ponteiro + i)); // Imprimir posi��o, valor e endere�o, respectivamente 
	}
	
	return 0;
	
}
