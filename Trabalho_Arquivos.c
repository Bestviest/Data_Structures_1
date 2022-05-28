// Dupla William Ribeiro e Victor Furtado 

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
 #include <time.h>

//Letra A
typedef struct 
    {
        int n_conta;
        char nome[32];
        int data_abertura;
        int tipo_conta;
        float limite;
        int data_vencimento;
    } conta;

void cadastrar_cliente(FILE *arquivo, conta c);

void cadastrar_cliente(FILE *arquivo, conta c){
    int n_conta = 0, da, tc, dv;  //dv-data vencimento, da- data abertura, tc- tipo conta
    float lm; //lm- limite
    char nome;
    int posicao;
    FILE *contas;

    while (n_conta < c.n_conta-1){
        fscanf(arquivo, "%d %s %d %d %f %d", &n_conta, &nome, &da, &tc, &lm, &dv);
    }

    posicao = ftell(arquivo); //ftell obtém o valor corrente do indicador de posição de arquivo do fluxo apontado.
    fseek(arquivo, posicao, SEEK_SET); //fseek seta o indicador de posição do fluxo apontado.

    fprintf(arquivo, "\n%d %s %d %d %.2f %d\n", c.n_conta, c.nome, c.data_abertura, c.tipo_conta, c.limite, c.data_vencimento);
    fprintf(arquivo, "%d %c %d %d %f %d\n", n_conta, nome, da, tc, lm, dv);


    
}

int main(){
    FILE *movimento;
    char n_conta;
    conta c;

    c.n_conta = 5;
    strcpy(c.nome, "Victor Furtado Estrada");
    c.data_abertura = 300321;
    c.tipo_conta = 2;
    c.limite = 1000.00;
    c.data_vencimento = 110421;


    movimento = fopen("clientes.txt", "r+");

    if (movimento == NULL)
    {
        printf("Erro na leitura do arquivo. \n");
        exit(1);
    }

    // for (int i = 0; i < 500; i++){
    //     fprintf(movimento, "%d %s %d %d %.2f %d\n", i+1, " ", 0, 0, 0.00, 0);
    // }

    cadastrar_cliente(movimento, c);
    
  return 0;

//Letra B

struct data_do_movimento{
    int ano;
    int mes;
    int dia;
} data_movimento;

struct movimento_do_dia {    
    struct data_movimento data;
	int operacao;
    float valor;
	float saldo;       
} movimento_dia;
 struct movimento_dia m;

float saque,deposito;

     printf("\n \n Movimento do dia \n \n");  

     printf("declare a data do movimento no formato: (ddmmaa):");
     scanf("%d/%d/%d", &m.data.dia, &m.data.mes, &m.data.ano);

     printf("digite o tipo de operacao:");
     scanf("%d", &m.operacao);
 

switch 
(m.operacao)
{

     case 1 :
     printf("declare o valor do deposito \n");
     scanf("%f",&deposito);
     deposito = m.saldo;
    
     break;

     case 2 :
     printf("Declareo valor do saque: ");
     scanf("%f",&saque);
     saque -= m.saldo; 
     break;
 
     case 3 :  
     printf("O numero digitado nao condiz as informações solicitadas ");
     break;
}

g(&c, sizeof(struct cadastro), 1, registros_do_banco);
movimento = fopen("movimento_do_dia.txt", "r+");



 if (movimento == NULL) 
     printf("\n Erro na Abertura do arquivo");

  else
      { fwrite(&m, sizeof(struct movimentodia), 1, movimento); // dados do movimento no arquivo
        if (ferror(movimento)) // váriavel "ferror" se torna muito útil quando queremos verificar se cada acesso a um arquivo teve sucesso, de modo que consigamos garantir a integridade dos arquivos.
           printf("\n Erro na Leitura do arquivo");
          

return 0; 