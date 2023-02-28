/* Questão 1: Escreva um programa que declare um array de inteiros com 5 elementos e um ponteiro para o primeiro elemento do array. 
Em seguida, preencha o array com valores informados pelo usuário e imprima esses valores utilizando o ponteiro. 
Ao final, mostre em tela cada valor armazenado e seu respectivo endereço de memória.*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int array[5]; // Vetor do tipo inteiro de cinco posições
	int *ponteiro; // Ponteiro do tipo inteiro
	
	printf("\nQuestão 1");
	
	for(int i = 0; i < 5; i++) { // For para a leitura das posições do vetor
		printf("\nInsira o %dº valor: ", i + 1);
		scanf("%d", &array[i]);
	}
	
	ponteiro = array; // Endereço do ponteiro recebe o primeiro índice do vetor
	
	for(int i = 0; i < 5; i++) { // For para impressão
		printf("\n%dº Valor: %d | Endereço: %p", i + 1, *(ponteiro + i), (ponteiro + i)); // Imprimir posição, valor e endereço, respectivamente 
	}
	
	return 0;
	
}
