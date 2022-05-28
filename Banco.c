#include <conio.h>
#include <string.h>
#include<stdlib.h>
#include<stdio.h>
#include <time.h>

typedef struct cliente{
    int numero_conta; //Entre 1 e 500
    char nome[32];
    float limite;
    abertura_conta1 abertura;
    vencimento_conta1 vencimento;
}CLIENTE;

typedef struct abertura_conta
{
    int dia=19;
    int mes=6; 
    int ano=2015; 
}abertura_conta1;

typedef struct vencimento_conta
{
    int dia=19;
    int mes=9;
    int ano=2015;
    
}vencimento_conta1;

typedef struct data_do_movimento 
{
   int dia=27;
   int mes= 03;
   int ano= 2022;

}Data_movimento;

typedef struct movimento{
    int data, valor;
    CLIENTE numero_conta;
};MOVIMENTO1;


int cadastrar_cliente() {
    CLIENTE x; 
    FILE *f
    f=open("cliente.txt", "r+");
    
    fprintf(f,"Digite o seu nome: %c \n", x.nome);
    scanf(f, "%c", &x.nome);

    fprintf(f,"digita o número da conta: %d \n", x.numero_conta);
    fscanf(f, "%d", &x.numero_conta); 
}


int movimento_dia_27()
{
    Data_movimento y;
    FILE *m
    m=open("movimento.txt", "r+");

    int deposito, saque, num, conta, valor;
    fprintf( m, "digita o número da conta: %d \n", conta);
    fscanf( m, "%d", &conta);

    fprintf(m, "Digite o número do valor que deseja depositar ou sacar: %d \n", valor);
    fscanf(m, "%d", &valor);
 
   fprintf(m, "O número da conta é %d", conta);
   fprintf(m, "O número do valor é %d", valor);
 
    while (num==1) {
     fprintf(m, "digite 1 para fazer um deposito %d \n", deposito);
     fscanf(m, "%d", &deposito);

     if(num==2) {
     fprintf(m, "digite 2 para fazer um saque %d \n", saque);
     fscanf(m, "%d", &saque);
   } 
  } 
  }

 





  