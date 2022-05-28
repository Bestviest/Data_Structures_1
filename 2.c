
//Para leitura de arquivos na linguagem C pode ser usada tanto fgetc, fputc.

#include "stdio.h"
#include "conio.h"
main()
{
FILE *meu_arquivo;
char *nome_do_arquivo, letra;
nome_do_arquivo= '\0';
printf("Entre com o nome do arquivo, o ponto e a extensão : ");
scanf("%c",nome_do_arquivo);
meu_arquivo=fopen(nome_do_arquivo, "r");
while((letra=getc(meu_arquivo)) != EOF)
printf("%c",letra);
fclose(meu_arquivo);
getch();
}
