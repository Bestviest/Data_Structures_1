#include <stdio.h>
#include <stdlib.h>

//lista de contar numero de nós em lista encadeada
struct soldado
{
    int x; //soldado
    circular *p;
    char nome[30];
};
typedef struct registro circular; //nos é o registro de cada *nós* circular

void insere(int n, nos *p);
void contaRecursiva(nos *p);

int main()
{
    int m=3;
    circular atual;
    circular*ponteiro;
    
    atual.prox = NULL;
    ponteiro = &atual;

    while(tecla != 0)
    {
        printf("====== MENU ======\n");
        printf("1 - para inserir o número do soldado\n");
        printf("2 - Começo do sorteio \n\n");
        scanf("%d", &tecla);
        getchar();
        printf("\n");

        if(tecla == 1)
        {
            printf("Digite o nome do soldado\n");
            scanf("%d", &nome.circular);
            getchar();
            insere(n1, &atual);
            printf("\n");
        }
        else if(tecla == 2)
        {
            contaRecursiva(&atual);
        }
    }
}

void insere(circular **1, char dado[30])
{
    nos *novo;
    novo = (nos *) malloc(sizeof(nos));
    novo->x = n;
    novo->prox = p->prox;
    p->prox = novo;
}

void exclui(circular *p) //versão recursiva da função contar nós
{
    int numNOS;
   if(p != NULL)
   {
       numNOS++;
       exclui(p->prox);
   }
   printf("%d número de nós", numNOS);
}


void contaIterativa(nos *p)  //versão iterativa da função contar nós 
{
    int numNOS;
    for(p = nos; p != NULL; p = p ->prox)
    printf("%d \n", p->numNOS);
  
}