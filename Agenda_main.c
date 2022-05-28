#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "agenda_modulos.c"

int main() 
{
 struct agenda contatos[100];
 int operacao=0; 
 contatos[0].tamanho=0;

 do 
 {
     system("cls")
     //Menu do programa
    printf("\n");
    printf("\n \n Bem Vindo ao Menu! Seleciona uma opção: \n \n");
    printf(" | Inserir Contato:   1   | \n");
    printf(" | Excluir Contato:   2   | \n");
    printf(" | Alterar Contato:   3   | \n");
    printf(" | Pesquisar Contato: 4   | \n");
    printf(" | Exibir Contatos:   5   | \n");
    printf(" | Estado da agenda:  6   | \n");
    printf(" | Sair:              0   | \n");
    printf(" Opção: ");
    scanf("%i", &operacao);
    switch(operacao)
    {
    case 0: 
        printf("Agenda Finalizada \n");
        break;
    case 1:
        Inserircontato(contatos);
        break;
    case 2:
        excluircontatos(contatos);
        break;
    case 3:
        alterarcontatos(contatos);
        break;
    case 4:
        pesquisarcontatos(contatos);
        break;
    case 5:
        exibircontatos(contatos);
        break;
    case 6:
        estadocontatos(contatos);
        break;
    default;

    }
 }
}