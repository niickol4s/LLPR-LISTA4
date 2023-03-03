/* Questão 2: Escreva um programa que solicite ao usuário que digite uma string e, em seguida, 
crie uma nova string que seja a cópia da string original, mas com todas as vogais removidas. 
O programa deve usar ponteiros para manipular as strings. */

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    char string[50];
	char *pointer;
	char novaString[50];
	char *novoPointer;

    printf("Digite uma string: ");
    fgets(string, 50, stdin);
	
    pointer = string;
    novoPointer = novaString;
    
    while(*pointer != '\0') {
    	if(*pointer == 'A' || *pointer == 'E' || *pointer == 'I' || *pointer == 'O' || *pointer == 'U' || *pointer == 'a' || *pointer == 'e' || *pointer == 'i' || *pointer == 'o' || *pointer == 'u') {
    		*pointer++;
    		continue;
		}
    	*novoPointer = *pointer;
    	
    	pointer++;
    	novoPointer++;
    	
	}
	
    printf("A nova string sem vogais: %s\n", novaString);

    return 0;
}

