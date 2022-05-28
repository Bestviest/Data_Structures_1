#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#define MAX 10 //valor máximo de números dentro do vetor  

int main(){

//Criação das variaveis 
int op, tam = 0;
printf("\n flag1 \n");
int* vetKey; 

int *ptrTam = &tam; //ponteiro para apontar o tamanho do vetor 

//Criação do vetor
int *vet = cria_vetor(ptrTam); //cria o vetor de número inteiro
printf("O vetor criado foi: \n");
imprime_vetor(vet, tam);
printf("\n flag4 \n");

//Primeira execução -> cria um vetor inicial -> mostra o menu pela primeira vez -> Entra... 
menu(); 
scanf("%i", &op); //recebe a escolha do usuario 

do{
    switch(op)
    {
        //coordenar a utilização do Quicksort
        case 1:
        system("cls");
        printf("\n \n Quicksort \n \n");
        printf("Vetor original \n");

        //imprimir o vetor antes da ordenação
        imprime_vetor(vet, tam);
        printf("\n \n Vetor ordenado com Quicksort: \n \n"); 
        //chamada da função quicksort
        quickSort(vet, 0, tam-1);
        //impressão do vetor depois da ordenação
        imprime_vetor(vet, tam);
        break;

        
    }
}
}
