#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct circular{
  char nome[30];
  struct circular *prox;      
};
typedef struct circular Circular;

void insere(Circular **l, char dado[30]);
void menu();
void exclui(Circular *p);

Circular *cria_nodo();

Circular *cria_nodo(){
     Circular *p;
     p=(Circular*)malloc(sizeof(Circular)); //alocar a memoria para ponteiro
     if(!p)
     {
           printf("problemas na alocacao");
           getch();
           exit(0);
     }
}

void menu()
{
     static Circular *pro = NULL;
     int op; // opção de menu
     char nome[30],var;
     printf("\n \n Opcao 1: Inserir Soldados: \n \n  ");
     printf("\n \n Opcao 2: Iniciar a remocao: \n \n");
     printf("\n \n Opcao 3: Sair:\n \n");
     scanf("%d",&op);

     switch(op)
     {
       fflush(stdin); //limpa o buffer do teclado
          case 1:
         {
             while(var!='N' && var!='n') //verificar se a letra é maíscula ou não? 
        {
         printf("Digite o nome do soldado: ");
         scanf("%s",nome); // %s para o char 
         
         insere(&pro, nome); // insere na lista circular
         fflush(stdin); // limpa o buffer do teclado
         
         printf("\n Deseja inserir novos Soldados? S para SIM ou N para NAO");
        scanf("%c",&var); // %c lê o caractere 
        }
         menu();
        }

        case 2:
        {
        exclui(pro);
        exit(0);
        }
                        
         case 3:
        {
        exit(0); 
        }
}
void insere(Circular **l, char dado[30])
{
     Circular *novo, *aux; //ponteiro de novo e auxiliar 
     novo=cria_nodo();
     strcpy(novo->nome,dado);
     if(*l==NULL)
     {
        novo->prox=novo;        
        *l=novo;
     }
     else
     {
         aux=*l;
         while(aux->prox != *l)
         {
               aux=aux->prox;
         }
         aux->prox=novo;
         novo->prox=*l;
     }
}

//sempre desenhar antes de fazer o código 

void exclui(Circular *p)
{
    Circular *proximo; 
    char nodulo[30];
    int e; 

    printf("Digite o nome do soldado: ")
    scanf("%s", &nodulo);

   while ((strcmp(nodulo, p->nome))!=0) //entra com  o nome do nodulo
   // strcmp realiza a cópia do conteúdo de uma variável a outra
   {
       p=p->prox; //vai para o proximo nodulo 
   }

   while(p->prox!=p) //dar a volta na lista
   {
       printf("Contagem comeca pelo soldado %s", p->nome);
       getch();
    
    for(i=1;i<3;i++) //m=4
    {
        if (i==2)
        {
            proximo=p; //encontra o nodo anterior do que vai ser removido
        }
        p=p->prox;
    }
    printf("\n \n Soldado removido: %s", p->nome);
    proximo->prox = p->prox;
    free(p); //fazer a ligação do nodo anterior do removido para o próximo
    p=proximo->prox;

}
printf("Soldado vivo: %s", p->nome);
getch();
}

int main(){
  menu();
  system("PAUSE");	
  return 0;
}