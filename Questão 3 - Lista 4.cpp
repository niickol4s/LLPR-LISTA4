/* Quest�o 3: Escreva um programa que declare duas vari�veis inteiras e dois ponteiros para essas vari�veis. 
Em seguida, preencha as vari�veis com valores informados pelo usu�rio. 
Utilizando ponteiros, troque os valores entre as duas vari�veis sem usar uma vari�vel tempor�ria e 
sem utilizar operadores de atribui��o direta. Em seguida, imprima os valores atualizados das duas vari�veis. */

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int number1; // Vari�vel do tipo inteiro
	int number2; // Vari�vel do tipo inteiro
	int *pointer1; // Ponteiro apontando para var. tipo inteiro (number1)
	int *pointer2; // Ponteiro apontando para var. tipo inteiro (number2)
	
	printf("\nQuest�o 3\n");
	
	printf("\nInsira o primeiro valor: ");
	scanf("%d", &number1); // Leitura de number1 (primeiro valor)
	printf("\nInsira o segundo valor: ");
	scanf("%d", &number2); // Leitura de number2 (segundo valor)
	
	printf("\nValores inseridos na ordem:\n");
	printf("\nPrimeiro valor: %d | Segundo valor: %d\n", number1, number2);
	
	pointer1 = &number1; // Pointer1 recebe o endere�o de number1
	pointer2 = &number2; // Pointer2 recebe o endere�o de number2
	
	// Aritm�tica de ponteiros
	
	*pointer1 = *pointer1 + *pointer2; // Os valores das vari�veis s�o somados e atribu�dos ao pointer1
	*pointer2 = *pointer1 - *pointer2; // Os valores das vari�veis s�o subtra�dos e atribu�dos ao pointer2
	*pointer1 = *pointer1 - *pointer2; // Os valores das vari�veis s�o subtra�dos e atribu�dos ao pointer1
	
	printf("\nValores inseridos em ordem oposta:\n");
	printf("\nPrimeiro valor: %d | Segundo valor: %d\n", *pointer1, *pointer2); // Impress�o dos valores trocados
	
	return 0;
}
