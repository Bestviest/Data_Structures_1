#include "stdio.h"
#include "string.h"
main()

{
FILE *arqv; //declara o arquivo 
char *nome_arqv, frase[81]; //cria uma v�riavel char com o ponteiro do nome do arquivo
nome_arqv= '\0';
printf("Entre com o nome do arquivo, o ponto e a extens�o: "); //aparece na tela 
scanf("%c",nome_arqv); //digita o nome do arquivo 
arqv=fopen(nome_arqv,"w"); //abre o arquivo 'w' de leitura e escrita 
printf("Digite uma linha [max. 80 caracteres] e tecle return: \n\n"); 
getchar(); // fun��o de entrada e leitura do arquivo getchar = getch(stdin) 
while(strlen(gets(frase)) > 1) //la�o de repti��o para ler o arquivo com inteiro caracter por caracter com getch 
{
fputs(frase,arqv);
fputs("\n",arqv); //fputs escreve uma string no arquivo   
} fclose(arqv); //fechamento do arquivo 
}
