/*    Cria uma �rvore binaria e a atravessa em pr�-ordem, ordem e p�s-ordem    */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<conio.h>
#include <locale.h>

/* estrutura base que suporta uma �rvore */
struct treeNode { 
   struct treeNode *leftPtr; /* ponteiro para sub�rvore esquerda */
   int data; /* node value */
   struct treeNode *rightPtr; /* ponteiro para sub�rvore direita */
};

typedef struct treeNode TreeNode; /* sin�nimo para struct treeNode */
typedef TreeNode *TreeNodePtr; /* sin�nimo para TreeNode* */

/* prot�tipos */
void insertNode( TreeNodePtr *treePtr, int value );
void inOrder( TreeNodePtr treePtr );
void preOrder( TreeNodePtr treePtr );
void postOrder( TreeNodePtr treePtr );
int altura ( TreeNodePtr treePtr );

/* fun��o main inicia a execu��o do programa */
int main( void )
{ 
   setlocale(LC_ALL,"ptb");
   int i; /* contador para loop de 1 a 10 */
   int item; /* vari�vel para manter valores aleat�rios */
   TreeNodePtr rootPtr = NULL; /* �rvore inicialmente vazia */

   srand( time( NULL ) ); 
   printf( "Os n�meros que ser�o inseridos na �rvore s�o:\n" );

   /* inserire valores aleat�rios entre 0 e 14 na �rvore */
   for ( i = 1; i <= 10; i++ ) { 
      item = rand() % 15;
      printf( "%3d", item );
      insertNode( &rootPtr, item );
   } /* fim do for */

   /* atravessa a �rvore preOrder */
   printf( "\n\nTravessia preOrder:\n" );
   preOrder( rootPtr );

   /* atravessa a �rvore inOrder */
   printf( "\n\nTravessia inOrder:\n" );
   inOrder( rootPtr );

   /* atravessa a �rvore postOrder */
   printf( "\n\nTravessia postOrder:\n" );
   postOrder( rootPtr );
   
   /* imprime a altura */
   printf( "\n\nAltura da �rvore: %d\n", altura( rootPtr ));
   getch();
   return 0; /* indica a conclus�o bem-sucedida */
} /* fim do main */

/* insere n� na �rvore */
void insertNode( TreeNodePtr *treePtr, int value )
{ 
   /* se a �rvore estiver vazia */
   if ( *treePtr == NULL ) {   
      *treePtr = (TreeNode*) malloc( sizeof( TreeNode ) );

      /* se a mem�ria foi alocada entao atribui dados */
      if ( *treePtr != NULL ) { 
         ( *treePtr )->data = value;
         ( *treePtr )->leftPtr = NULL;
         ( *treePtr )->rightPtr = NULL;
      } /* fim do if */
      else {
         printf( "%d N�o inserido. N�o h� mem�ria dispon�vel.\n", value );
      } /* fim do else */
   } /* fim do if */
   else { /* �rvore n�o est� vazia */
      /* dado a inserir � menor do que o dado no n� atual */
      if ( value < ( *treePtr )->data ) {
         insertNode( &( ( *treePtr )->leftPtr ), value );
      } /* fim do if */

      /* dado a inserir � maior do que o dado no n� atual */
      else if ( value > ( *treePtr )->data ) {
         insertNode( &( ( *treePtr )->rightPtr ), value );
      } /* fim do else if */
      else { /* valor de dado duplicado � ignorado */
         printf( "dup" );
      } /* fim do else */
   } /* fim do else */
} /* fim da fun��o insertNode */

/* Inicia a travessia na ordem */
void inOrder( TreeNodePtr treePtr )
{ 
   /* se �rvore n�o est� vazia, ent�o atravessa */
   if ( treePtr != NULL ) { 
      inOrder( treePtr->leftPtr );
      printf( "%3d", treePtr->data );
      inOrder( treePtr->rightPtr );
   } /* fim do if */
} /* fim da fun��o inOrder */

/* Inicia a travessia pr�-ordem */
void preOrder( TreeNodePtr treePtr )
{ 
   /* se �rvore n�o est� vazia, ent�o atravessa */
   if ( treePtr != NULL ) { 
      printf( "%3d", treePtr->data );
      preOrder( treePtr->leftPtr );
      preOrder( treePtr->rightPtr );
   } /* fim do if */
} /* fim da fun��o preOrder */

/* Come�a a travessia postorder da �rvore */
void postOrder( TreeNodePtr treePtr )
{ 
   /* se �rvore n�o est� vazia, ent�o atravessa */
   if ( treePtr != NULL ) { 
      postOrder( treePtr->leftPtr );
      postOrder( treePtr->rightPtr );
      printf( "%3d", treePtr->data );
   } /* fim do if */
} /* fim da fun��o postOrder */

// Devolve a altura da �rvore bin�ria
// cuja raiz � r.

int altura (TreeNodePtr treePtr ) {
   if ( treePtr == NULL) 
      return -1; // altura da �rvore vazia
   else {
      int he = altura (treePtr->leftPtr);
      int hd = altura (treePtr->rightPtr);
      printf("%d ", he);
      if (he < hd) return hd + 1;
      else return he + 1;
   }
}

