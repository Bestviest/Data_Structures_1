#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#define MAX_RAND 100 //valor máximo da criação dos números aleatórios coma função rand()

//Limpa o buffer do teclado
void clean_stdin(){
    int c;
    while ((c= getchar())  '\n' && c ≠ EOF);
}

//menu principal do programa 
void menu(){
    system("cls");
    printf("\n \n MENU \n \n");
    printf("1 - Ordenar utilizando Quicksort (fast) \n");
    printf("2 - Ordenar utilizando Heapsort (fast) \n");
    printf("3 - Ordenar utilizando Quicksort (passo a passo) \n");
    printf("4 - Ordenar utilizando Heapsort (passo a passo) \n");
    printf("5 - Imprimir vetor. \n");
    printf("6 - Criar um novo vetor. \n");
    printf("0 - Sair do programa. \n");
    printf("\n Opcao: ");
}

//Menu do Quicksort passo a passo 
int* menu_quicksort(){
    int op, erro_flag = 1, erro_flag2 = 1, erro_flag3 = 1;

    //char de comparação 
    char c, c2;

    //vetor chave 
    int* vet = (int*) calloc(3, sizeof(int));

    while(error_flag){
        system("cls");
        printf("\n \n MENU QUICKSORT \n \n");
        printf("Passos relevantes: \n");
        printf("A) Selecao de pivo: apresenta qual elemtno foi selecionado e como \n");
        printf("B) Troca de elementos: apresenta o valor do pivo, o indice e valor dos elementos");
        printf("C) Divisao do vetor: mostra como o vetor esta sendo particionado: quais são os indices. \n");

        printf("\n Opcoes: \n");
        printf("1- Visualizar apenas 1 passo. \n");
        printf("2- Visualizar 2 passos. \n");
        printf("3- Visualizar todos os passos. \n");
        scanf("%i", &op);
        switch(op){
            case 1:
                while(erro_flag1){
                    printf("Digite a letra do passo que deseja visualizar: \n");
                    clean_stdin();
                    scanf("%c", &c);

                    //transforma o caractere digitados em maiscula 
                    toupper(c);
                    switch(c){
                        case 'A':
                        error_flag1 = 0;
                        vet[0] = 1;
                        break;
                        case 'B':
                        error_flag1 = 0;
                        vet[1] = 1;
                        break;
                        case'C'
                        error_flag1 = 0;
                        vet[2] = 1;
                        break;
                        default:
                        error_flag1 = 1;
                        puts("Opcao invalida: \n");
                        clean_stdin();
                        getchar();
                    }
                }
                error_flag = 0;
                break;
                case2:
                 while(erro_flag2){
                    printf("Digite a letra do passo que deseja visualizar: \n");
                    clean_stdin();
                    scanf("%c", &c);

                    //transforma o caractere digitados em maiscula 
                    toupper(c);
                    switch(c){
                        case 'A':
                        error_flag2 = 0;
                        vet[0] = 1;
                        break;
                        case 'B':
                        error_flag2 = 0;
                        vet[1] = 1;
                        break;
                        case'C'
                        error_flag2 = 0;
                        vet[2] = 1;
                        break;
                        default:
                        error_flag2 = 1;
                        puts("Opcao invalida: \n");
                        clean_stdin();
                        getchar();
        }
    }
                while(erro_flag3){
                    printf("Digite a letra do passo que deseja visualizar: \n");
                    clean_stdin();
                    scanf("%c", &c2);

                    //transforma o caractere digitados em maiscula 
                    toupper(c);
                    switch(c){
                        case 'A':
                        error_flag3 = 0;
                        vet[0] = 1;
                        break;
                        case 'B':
                        error_flag3 = 0;
                        vet[1] = 1;
                        break;
                        case'C'
                        error_flag3 = 0;
                        vet[2] = 1;
                        break;
                        default:
                        error_flag3 = 1;
                        puts("Opcao invalida: \n");
                        clean_stdin();
                        getchar();
                    }
                }
                
                error_flag= 0;
                break;
                case 3:
                vet[0] = 1;
                vet[1] = 1;
                vet[2] = 1;
                error_flag = 0;
                break;
                default:
                erro_flag=1;
                puts("Opcao invalida \n");
                clean_stdin();
                getchar();
        }
    }
    return vet;

}