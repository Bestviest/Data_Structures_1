#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "agenda.h"

void estadoagenda (struct agenda t[]) // exibi o estado da agenda 
{
    printf(" \n \n Estado da Agenda \n \n" );
    printf("Quantidade maxima de contatos: 100 \n");
    printf("Contatos Cadastrados: %i", t[0].tamanho);
    system("PAUSE");
}

void pesquisarcontatos (struct agenda t[]) //pesquisa um contato na agenda
{
    char verifacao[100], p='a';
    int i, k;

    printf("\n \n Pesquisa Contatos \n \n ");

    while((p=='a') || (p=='A'))
    {
        printf("Informe o nome do usuario: \n");
        
        fflush(stdin); //limpa o buffer do teclado
        fgets(verifacao,99,stdin); //fgets para ler uma string num arquivo

        for(i=0;i<strlen(verifacao); i++)
    {
            if((verifacao[i] >= 'a') && (verifacao[i] <= 'z')) //passa todos os caracteres minusculos para maisculos.
        {
            verifacao[i]-=32;
        }
    }

    for(i=0; i<t[0].tamanho; i++) //t[0].tamanho corresponde à quantidade de contatos cadastrados.
    {
    k=strcmp(verifacao, t[i].nome); //verifica se o nome digitado existe na agenda
    if(k==0) //caso exista, mostra os dados do contato na tela 
      {
     printf("\n");
     printf("Contato: %s", t[i].nome);
     printf("email: %s", t[i].email);
     printf("Celular: %s", t[i].celular);
     printf("\n");
     break;   
      }
    }
   
    if(k!=0)
    {
        printf("\n");
        printf("Contato não existe \n");
    }
    
    printf(" Deseja pesquisar outro contato? S/N \n");
    scanf("%c", &o);
    }
}

void alterarcontatos (struct agenda t[]) //altera o contato na agenda 
{
    char verifacao[100];
    int i, k;

    printf("\n \n Alteração de Contatos \n \n");
    printf("Informe o nome do usuario da agenda: \n");

    fflush(stdin);
    fgets(verifacao, 99, stdin);

      for(i=0;i<strlen(verifacao); i++)
    {
            if((verifacao[i] >= 'a') && (verifacao[i] <= 'z')) //passa todos os caracteres minusculos para maisculos.
        {
            verifacao[i]-=32;
        }
    }

    for(i=0; i<t[0].tamanho; i++)
    {
     k=strcmp(verifacao, t[i].nome); //verifica se o nome digitado existe na agenda
     if(k==0) //caso exista, mostra os dados do contato na tela 
      {
     printf("\n");
     printf("Contato: %s", t[i].nome);
     printf("email: %s", t[i].email);
     printf("Celular: %s", t[i].celular);
     printf("\n");
     printf("Informe o novo numero de e-mail: ");
     fflush(stdin); //limpa o buffer do teclado.
     fgets(t[i].email,9,stdin);
     printf("Informe o novo numero de celular: ");
     fflush(stdin);
     fgests(t[i].celular,9,stdin);
     k=0;
     break;   
      }
    }
   
    if(k!=0)
    {
        printf("\n");
        printf("Contato não existe \n");
    }
    printf("\n");
    system("PAUSE");

}

void excluircontatos (struct agenda t[]) //função excluir contatos da agenda
{
    char verifacao[100], b;
    int k,i,j;

    printf("\n \n Excluir Contatos \n \n");
    printf("Informe o nome do usuario da agenda:")

    fflush(stdin);
    fgets(verif, 99, stdin);

for(i=0;i<strlen(verifacao); i++)
    {
            if((verifacao[i] >= 'a') && (verifacao[i] <= 'z')) //passa todos os caracteres minusculos para maisculos.
        {
            verifacao[i]-=32;
        }
    }

for(i=0; i<t[0].tamanho; i++) //pt[0].tamanho corresponde à quantidade de contatos cadastrados.
    {
    k=strcmp(verifacao, t[i].nome); //verifica se o nome digitado existe na agenda
    if(k==0) //caso exista, mostra os dados do contato na tela 
      {
     printf("\n");
     printf("Contato: %s", t[i].nome);
     printf("email: %s", t[i].email);
     printf("Celular: %s", t[i].celular);
     printf("\n");
     break;   
      }
    }

    if(k==0)
    {
        printf("\n");
        printf("Deseja realmente excluir esse contato? S/N ");
        scanf("%c", &b);

    if((b=='s') || (b=='S'))
    {
        for(j=i; j<t[0].tamanho; j++) //Se o usuario excluir algum contato, todos os outros registros serão movidos para que o espaço seja liberado na estrutura
        {
            strcpy(t[j].nome, t[j+1].nome);
            strcpy(t[j].email, t[j+1].email);
            strcpy(t[j].celular, t[j+1].celular);
        }
        t[0].tamanho-=1;
        
        printf("\n");
        printf("Uusario deletado com sucesso. \n");

    }
}
else
{
printf("Usuario não cadastrado. \n")
}
system("PAUSE");
}

void exibircontatos (struct agenda t[]) //Mostra todos os contatos cadastrados.
{
    int i;

    printf("\n \n lista de Contatos \n \n");

    for(i=0; i<t[0].tamanho; i++)
    {
     printf("\n");
     printf("Contato: %s", t[i].nome);
     printf("email: %s", t[i].email);
     printf("Celular: %s", t[i].celular);
     printf("\n");
    }
    System("PAUSE");
} 

void Inserircontato (struct agenda *t) //função cadastra contato na agenda. 
{
 char x='s', verifacao[100];   
 int i, y= -1, j;

 printf("\n \n Cadastro de Contatos \n \n");

 while((x=='S') || (x=='s'))
 {
     printf("Digite o nome do contato: ");
     fflush(stdin);
     fgets(verifacao, 99, stdin);
     
     for(i=0;i<strlen(verifacao); i++)
    {
            if((verifacao[i] >= 'a') && (verifacao[i] <= 'z')) //passa todos os caracteres minusculos para maisculos.
        {
            verifacao[i]-=32;
        }
    }

    for(i=0; i<t[0].tamanho; i++)
    {
        y=strcmp(verifacao, t[i].nome); //verifica se o nome digitado ja existe na agenda
        if(y==0)
        {
            printf("Usuario já cadastrado \n \n");
            break;
        }
    }
    if(y!=0) //caso o nome de contato não exista na agenda, o processo de cadastrar o usuario é iniciado.
    {
     for(i=0; i<t[0].tamanho; i++)   
     {
         if(verifacao[0]<t[i].nome[0])
         {
             break;
         } 
         //verifica a ordem em que o contato será cadastrado, comparando a primeira do letra do nome.
         //caso o nome informado tenha a primeira letra menor (a<b) que a um dos contatos cadastrados, o loop é interrompido na posição que o novo contrato será cadastrado.
         //Caso a primeira letra seja igual, o novo será cadastrato após o último contato.
         //Caso a primeira letra seja maior que as cadastradas na agenda, o novo contato será cadastrado na última posição.
     }

    for(j=t[0].tamanho; j>=i; j--) //Esse loop modifica a posição dos contatos já cadastrados, para criar espaço necessario para que novos sejam cadastrados.
    {
        strcpy(t[j].nome, t[j-1].nome);
        strcpy(t[j].email, t[j-1].email);
        strcpy(t[j].celular, t[j-1].celular);
    }

    strcpy(t[i].nome, verifacao);
    printf("Digite o email residencial do contato: ");
    fflush(stdin);
    fgets((t[i]).email, 9, stdin);

    printf("Digite o celular do contato: ");
    fflush(stdin);
    fgets((t[i]).celular, 9, stdin);
    printf("\n");

    t[0].tamanho++;
    printf("Cadastro Efetuado com Sucesso. \n \n");
    }

    printf("Deseja cadastrar um novo contato? S/N");
    scanf("%c", &x);
    printf("\n");
    y=-1;
    
 }

}


