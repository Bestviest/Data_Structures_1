#include "stdio.h"
#include "string.h"
main()

{
FILE *arqv; //declara o arquivo 
char *nome_arqv, frase[81]; //cria uma váriavel char com o ponteiro do nome do arquivo
nome_arqv= '\0';
printf("Entre com o nome do arquivo, o ponto e a extensão: "); //aparece na tela 
scanf("%c",nome_arqv); //digita o nome do arquivo 
arqv=fopen(nome_arqv,"w"); //abre o arquivo 'w' de leitura e escrita 
printf("Digite uma linha [max. 80 caracteres] e tecle return: \n\n"); 
getchar(); // função de entrada e leitura do arquivo getchar = getch(stdin) 
while(strlen(gets(frase)) > 1) //laço de reptição para ler o arquivo com inteiro caracter por caracter com getch 
{
fputs(frase,arqv);
fputs("\n",arqv); //fputs escreve uma string no arquivo   
} fclose(arqv); //fechamento do arquivo 
}
