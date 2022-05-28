#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *arqv;
	char nomeArquivo[20], caracter;
	printf("Digite o nome do arquivo de até 20 caracteres");
	scanf("%s", nomeArquivo)
	arqv = fopen(nomeArquivo, "w");
	if (arqv==NULL) {
		printf("Arquivo nao existe.");
		exit(1);
	}
	caracter=getc(arqv);
	while (caracter!=EOF){
		printf("%c", caracter);
		caracter=getc(arqv);
	}
	return 0;
}
