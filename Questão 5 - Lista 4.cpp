/* Quest�o 5: Escreva um programa que declare uma vari�vel real e um ponteiro para essa vari�vel.
Em seguida, preencha a vari�vel com um valor real informado pelo usu�rio e utilize o ponteiro para calcular o dobro desse valor.
Por fim, utilize o ponteiro para imprimir na tela o valor original e o dobro calculado. */

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float number;
	float *pointer;
	
	printf("\nQuest�o 5\n");
	
	printf("\nInsira o valor: ");
	scanf("%f", &number);
	
	pointer = &number;
	
	printf("\nValor inserido: %.0f | Dobro do valor: %.0f", *pointer, (*(pointer) * 2));
	
	return 0;
}
