#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pilha{ 
    char x;
    struct Pilha *prox;
};
typedef struct Pilha pilha;

void pop(pilha **topo){
    pilha *aux; //cria uma pilha auxiliar
    aux= *topo; 
    *topo= (*topo) -> prox; //desempilha o proximo e vai para o de baixo
    free(aux); //faz a junção da pilha com o caracter retirado com o anterior
}

void push(char x[], pilha **topo, int tamanho){ //pilha **topo indentifica o void pop 
    pilha *novo; //cria um novo ponteiro para pilha "*novo"
    int i; //cria uma variavel suporte chamada i

    for(i=0; i<tamanho; i++){ //tamanho da pilha com caracteres 
        if(x[i] == '(' || x[i] == '[' || x[i] == '{'){ //declara as caracteres na pilha e empilha quando reconhece-las 
            novo=(pilha*) malloc (sizeof(pilha)); //aloca na memoria os caracteres declaradas com char na pilha 
            novo -> x= x[i];
            novo -> prox= *topo; //desempilha topo na auxiliar pelo (void pop)
            *topo=novo; //pilha novo recebe o void pop **topo
          }

        if(x[i] == ')'){ //coloca na pilha ')'
            if((*topo)-> x== '('){ // se tiver o '(' 
                pop(topo); //se tiver '(' e ')' desempilha
            }else{
                break;
            }
        }
        
        if(x[i] == ']'){ //coloca na pilha ']'
            if((*topo)-> x== '['){ //se tiver o '['
                pop(topo);//se tiver '[' e ']' desempilha
            }else{ 
                break;
            }
        }

        if(x[i] == '}'){ //se em cima tiver o '}'
            if((*topo)-> x== '{'){ //se tiver o '{'
                pop(topo); //se tiver '{' e '}' desempilha
            }else{
                break;
            }
        }
    }
}

int main(){
    pilha *topo=NULL; //começar a contagem da pilha
    char caracter[10];
    int alternativa, i, tamanho; 

    do{
        printf(" \n Menu \n");
        printf("\n 1- Escreva o conjunto de caracteres: \n");
        printf("\n 2- Finalizar o menu ");
        printf("\n alternativa: ");
        
        fflush(stdin); //limpa o buffer do teclado
        scanf("%d", &alternativa);
        
        while(alternativa <1 || alternativa >2){ //se o usuario escrever um valor diferente das alternativas acima
        	printf("Nova alternativa: ");
        	scanf("%d", &alternativa);
		}

     
    switch(alternativa)
	{
       
        case 1:
        printf("\n Caracter: ");
        fflush(stdin); 
        gets(caracter); //verifica na string o valor de caracteres
        tamanho=0;
        
        for(i=0; i<10; i++){
            if(caracter[i] != '\0'){ //'\0' final da string
                tamanho++;
            }else{
                break;
            }
        }

        push(caracter, &topo, tamanho); //empilha caracterer para o **topo da pilha
        
        if(topo==NULL){ // se a pilhar estiver vazia ela é correta
            printf("\n Caracter Valida! \n ");
        }else{
            printf("\n Caracter Invalida! \n \n");
        }
        system("pause");
        system("cls");
        break;

        } 
		
	} while(alternativa !=2);
        system("pause");
        return (0);
        
}




