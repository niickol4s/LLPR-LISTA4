/* Questão 4: Escreva um programa que solicite ao usuário que digite um número inteiro positivo n. 
Em seguida, crie um vetor dinamicamente alocado de tamanho n e preencha o vetor com valores inteiros informados pelo usuário. 
Em seguida, crie um ponteiro que aponte para o primeiro elemento do vetor e percorra o vetor utilizando esse ponteiro, 
imprimindo na tela os valores dos elementos do vetor em ordem inversa. */

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int n; // Tamanho do vetor
	int *pointer;
	
	printf("\nQuestão 4\n");
	
	printf("\nInsira a quantidade de valores que deseja digitar: ");
	scanf("%d", &n);
	
	int array[n];
	
	printf("\nInsira os valores:\n");
	
	for(int i = 0; i < n; i++) {
		printf("\n%dº valor: ", i + 1);
		scanf("%d", &array[i]);
	}
	
	pointer = array;
	
	printf("\nOrdem original dos valores digitados:\n");
	
	for(int i = 0; i < n; i++) printf("\n%d;", *(pointer + i));
	
	printf("\nValores em ordem inversa:\n");
	
	for(int i = (n - 1); i >= 0; i--) printf("\n%d;", *(pointer + i));
	
	return 0;
}
