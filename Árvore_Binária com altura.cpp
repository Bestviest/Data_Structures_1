/*    Cria uma árvore binaria e a atravessa em pré-ordem, ordem e pós-ordem    */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<conio.h>
#include <locale.h>

/* estrutura base que suporta uma árvore */
struct treeNode { 
   struct treeNode *leftPtr; /* ponteiro para subárvore esquerda */
   int data; /* node value */
   struct treeNode *rightPtr; /* ponteiro para subárvore direita */
};

typedef struct treeNode TreeNode; /* sinônimo para struct treeNode */
typedef TreeNode *TreeNodePtr; /* sinônimo para TreeNode* */

/* protótipos */
void insertNode( TreeNodePtr *treePtr, int value );
void inOrder( TreeNodePtr treePtr );
void preOrder( TreeNodePtr treePtr );
void postOrder( TreeNodePtr treePtr );
int altura ( TreeNodePtr treePtr );

/* função main inicia a execução do programa */
int main( void )
{ 
   setlocale(LC_ALL,"ptb");
   int i; /* contador para loop de 1 a 10 */
   int item; /* variável para manter valores aleatórios */
   TreeNodePtr rootPtr = NULL; /* árvore inicialmente vazia */

   srand( time( NULL ) ); 
   printf( "Os números que serão inseridos na árvore são:\n" );

   /* inserire valores aleatórios entre 0 e 14 na árvore */
   for ( i = 1; i <= 10; i++ ) { 
      item = rand() % 15;
      printf( "%3d", item );
      insertNode( &rootPtr, item );
   } /* fim do for */

   /* atravessa a árvore preOrder */
   printf( "\n\nTravessia preOrder:\n" );
   preOrder( rootPtr );

   /* atravessa a árvore inOrder */
   printf( "\n\nTravessia inOrder:\n" );
   inOrder( rootPtr );

   /* atravessa a árvore postOrder */
   printf( "\n\nTravessia postOrder:\n" );
   postOrder( rootPtr );
   
   /* imprime a altura */
   printf( "\n\nAltura da árvore: %d\n", altura( rootPtr ));
   getch();
   return 0; /* indica a conclusão bem-sucedida */
} /* fim do main */

/* insere nó na árvore */
void insertNode( TreeNodePtr *treePtr, int value )
{ 
   /* se a árvore estiver vazia */
   if ( *treePtr == NULL ) {   
      *treePtr = (TreeNode*) malloc( sizeof( TreeNode ) );

      /* se a memória foi alocada entao atribui dados */
      if ( *treePtr != NULL ) { 
         ( *treePtr )->data = value;
         ( *treePtr )->leftPtr = NULL;
         ( *treePtr )->rightPtr = NULL;
      } /* fim do if */
      else {
         printf( "%d Não inserido. Não há memória disponível.\n", value );
      } /* fim do else */
   } /* fim do if */
   else { /* árvore não está vazia */
      /* dado a inserir é menor do que o dado no nó atual */
      if ( value < ( *treePtr )->data ) {
         insertNode( &( ( *treePtr )->leftPtr ), value );
      } /* fim do if */

      /* dado a inserir é maior do que o dado no nó atual */
      else if ( value > ( *treePtr )->data ) {
         insertNode( &( ( *treePtr )->rightPtr ), value );
      } /* fim do else if */
      else { /* valor de dado duplicado é ignorado */
         printf( "dup" );
      } /* fim do else */
   } /* fim do else */
} /* fim da função insertNode */

/* Inicia a travessia na ordem */
void inOrder( TreeNodePtr treePtr )
{ 
   /* se árvore não está vazia, então atravessa */
   if ( treePtr != NULL ) { 
      inOrder( treePtr->leftPtr );
      printf( "%3d", treePtr->data );
      inOrder( treePtr->rightPtr );
   } /* fim do if */
} /* fim da função inOrder */

/* Inicia a travessia pré-ordem */
void preOrder( TreeNodePtr treePtr )
{ 
   /* se árvore não está vazia, então atravessa */
   if ( treePtr != NULL ) { 
      printf( "%3d", treePtr->data );
      preOrder( treePtr->leftPtr );
      preOrder( treePtr->rightPtr );
   } /* fim do if */
} /* fim da função preOrder */

/* Começa a travessia postorder da árvore */
void postOrder( TreeNodePtr treePtr )
{ 
   /* se árvore não está vazia, então atravessa */
   if ( treePtr != NULL ) { 
      postOrder( treePtr->leftPtr );
      postOrder( treePtr->rightPtr );
      printf( "%3d", treePtr->data );
   } /* fim do if */
} /* fim da função postOrder */

// Devolve a altura da árvore binária
// cuja raiz é r.

int altura (TreeNodePtr treePtr ) {
   if ( treePtr == NULL) 
      return -1; // altura da árvore vazia
   else {
      int he = altura (treePtr->leftPtr);
      int hd = altura (treePtr->rightPtr);
      printf("%d ", he);
      if (he < hd) return hd + 1;
      else return he + 1;
   }
}

