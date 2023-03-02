/* Questão 3: Escreva um programa que declare duas variáveis inteiras e dois ponteiros para essas variáveis. 
Em seguida, preencha as variáveis com valores informados pelo usuário. 
Utilizando ponteiros, troque os valores entre as duas variáveis sem usar uma variável temporária e 
sem utilizar operadores de atribuição direta. Em seguida, imprima os valores atualizados das duas variáveis. */

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int number1; // Variável do tipo inteiro
	int number2; // Variável do tipo inteiro
	int *pointer1; // Ponteiro apontando para var. tipo inteiro (number1)
	int *pointer2; // Ponteiro apontando para var. tipo inteiro (number2)
	
	printf("\nQuestão 3\n");
	
	printf("\nInsira o primeiro valor: ");
	scanf("%d", &number1); // Leitura de number1 (primeiro valor)
	printf("\nInsira o segundo valor: ");
	scanf("%d", &number2); // Leitura de number2 (segundo valor)
	
	printf("\nValores inseridos na ordem:\n");
	printf("\nPrimeiro valor: %d | Segundo valor: %d\n", number1, number2);
	
	pointer1 = &number1; // Pointer1 recebe o endereço de number1
	pointer2 = &number2; // Pointer2 recebe o endereço de number2
	
	// Aritmética de ponteiros
	
	*pointer1 = *pointer1 + *pointer2; // Os valores das variáveis são somados e atribuídos ao pointer1
	*pointer2 = *pointer1 - *pointer2; // Os valores das variáveis são subtraídos e atribuídos ao pointer2
	*pointer1 = *pointer1 - *pointer2; // Os valores das variáveis são subtraídos e atribuídos ao pointer1
	
	printf("\nValores inseridos em ordem oposta:\n");
	printf("\nPrimeiro valor: %d | Segundo valor: %d\n", *pointer1, *pointer2); // Impressão dos valores trocados
	
	return 0;
}
