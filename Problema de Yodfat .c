#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct circular{
  char nome[15];
  struct circular *prox;      
};
typedef struct circular Circular; //declarar o nome da variável do struct como "circular"

void insere(Circular **l, char dado[15]);
void menu();
void exclui_soldado(Circular *p);

Circular *cria_nodo();

Circular *cria_nodo(){
     Circular *p;
     p=(Circular*)malloc(sizeof(Circular)); //aloca memoria para o ponteiro p de circular
     if(!p) //diferente de p
     {
           printf("problemas na alocacao");
           getch();
           exit(0);
     }
}
void menu()
{
     system("cls"); //limpa o buffer
     static Circular *pe = NULL; //cria ponteiro "pe" para identificar os void insere e exclui
     int op; //op para menu
     char nome[15],var;
     printf("Opcao 1: Inserir Soldados:  ");
     printf("\nOpcao 2: Iniciar a remocao: ");
     printf("\nOpcao 3: Sair:\n");
     scanf("%d",&op); //ler o teclado
     switch(op)
     {
               fflush(stdin);
               case 1:
                    {
                        while(var!='N' && var!='n') //fazer o Sim e o Não
                        {
                           printf("Digite o nome do soldado: ");
                           scanf("%s",nome); 
                           insere(&pe, nome);
                           fflush(stdin);
                           puts("\nDeseja inserir novos Soldados? S para SIM ou N para NAO");
                           scanf("%c",&var); 
                        }
                        menu();
                    }
              case 2:
                   {
                        exclui(pe);
                        exit(0);
                   }
                        
              case 3:
                   {
                        exit(0);
                   }
     }
}
void insere(Circular **l, char dado[15]) /*ponteiro de ponteiro, para colocar o 
endereço no próprio ponteiro*/ //encadeamento
{
     Circular *novo, *aux; //cria duas variaveis da struct circular
     novo=cria_nodo(); //cria novo nodo
     strcpy(novo->nome,dado); // strcpy copia a variável de cima
     {
        novo->prox=novo; // novo no  
        *l=novo;
     }
     else
     {
         aux=*l;
         while(aux->prox != *l) //!= não igual a *1 
         {
               aux=aux->prox; //aux para o proximo nodo
         }
         aux->prox=novo;
         novo->prox=*l;
     }
}
void exclui_soldado(circular *p)
{
    Circular *pant; //ponteiro para o ponteiro anterior
    char no[15]; //declara o tamanho do no
    int m; // declara variavel para o numero sorteado
    
    if (p==NULL)
    {
         printf("Lista vazia");
         getch();
         menu(); // declara o  menu
    }

    printf("Digite o nome do soldado que vai começar a remoção: ");
    scanf("%s",&no);

   while ((strcmp(no, p->nome))!=0) //entra com  o nome do nodulo
   // strcmp realiza a cópia do conteúdo de uma variável a outra
   {
       p=p->prox; //nodo compara com proximo nodo que vai para o proximo nodulo 
   }

   while(p->prox!=p) //dar a volta na lista (loop)
   {
       printf("Contagem comeca pelo soldado %s", p->nome);
       getch(); //reconhece na tela 
    
    for(m=1;m<3;m++) //numero sorteado é m=4
    {
        if (m==2)
        {
            pant=p; //encontra o nodo anterior(pant) do que vai ser removido
        }
        p=p->prox; // vai para o proximo nodo
    }
    printf("\n \n Soldado removido: %s", p->nome);
    pant->prox = p->prox; // comparada dois nodos para ver ver o que vai ser removido
    free(p); //fazer a ligação do nodo anterior do removido para o próximo
    p=pant->prox;

}
printf("Soldado que sobreviveu: %s", p->nome);
getch();
}
                 
int main(){
  menu();
  system("PAUSE");	
  return 0;
}