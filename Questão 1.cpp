#include <stdio.h>
 #include <stdlib.h> 
 #include <conio.h> 
 #define MAX 3 //A cada 1000 reais em vendas =1pt.   
 
 struct {        
 float nov, dez, jan;       
  
  float total=0;        
  char nome[20]; func; 
  int i,cont; 
  float aux,pts,venda=0; 
}
  
  func vet[MAX];   
  
  main(){       
  system("cls");
  
  for(i=0;i<MAX;i++){              
  printf("Digite o nome do funcionario %d:\n", i+1);              
  scanf("%s", &vet[i].nome);             
   printf("Digite o valor das vendas em novembro: ");              
   scanf("%f", &vet[i].nov);             
   printf("Digite o o valor das vendas em dezembro: ");              
    scanf("%f", &vet[i].dez);                     
	printf("Digite o valor das vendas em janeiro: ");             
    scanf("%f", &vet[i].jan);              
	   
	   venda=venda+(vet[i].nov+vet[i].dez+vet[i].jan);              
	   }
	   
	   system("cls");       
	   
	    for(i=0;i<MAX;i++){              
		printf("Funcionario %s vendeu em novembro: %.2f, ", vet[i].nome, vet[i].nov);              
		pts=vet[i].nov/1000;             
		vet[i].total=vet[i].total+pts;             
		printf("totalizando %.2f pontos\n", pts);        
		}        
		printf("\n");        
		for(i=0;i<MAX;i++){             
		 printf("Funcionario %s vendeu em dezembro: %.2f, ", vet[i].nome, vet[i].dez);             
		  pts=vet[i].dez/1000;              
		  vet[i].total=vet[i].total+pts;              
		  printf("totalizando %.2f pontos\n", pts);        
		  }
	   
	   printf("\n");       
	    for(i=0;i<MAX;i++){             
	 printf("Funcionario %s vendeu em janeiro: %.2f, ", vet[i].nome, vet[i].jan);              
	 pts=vet[i].jan/1000;              
	 vet[i].total=vet[i].total+pts;              
	 printf("totalizando %.2f pontos\n", pts);        
	 }      
	        
	 printf("\n");        
	 aux=0;        
	 cont=0;       
	  for(i=0;i<MAX;i++){              
	  if(vet[i].total>aux){                    
	   aux=vet[i].total;                     
	   cont=i;             
	    }       
		 }        printf("\n\nFuncionario %s teve a maior pontuacao nos tres meses. Total de: %.2f\n", vet[cont].nome, vet[cont].total); 
		        printf("\n\nValor total das vendas nos tres meses: %.2f\n", venda); 
				}             
 

