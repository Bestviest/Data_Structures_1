#include "stdio.h"
#include "conio.h"
void main(void)
{
FILE *meu_arquivo;
char *nome_do_arquivo, letras;
nome_do_arquivo = '\0';
printf("Entre com o nome do arquivo, o ponto e a extens�o: ");
scanf("%c",nome_do_arquivo);
meu_arquivo=fopen(nome_do_arquivo, "w");
fprintf("Digite um caracter ou uma string: ");
while((letras=getchar()) != '\r') //utilizado o getchar para abrir v�rios dados 
getc(letras,meu_arquivo);
fclose(meu_arquivo);
}

??

