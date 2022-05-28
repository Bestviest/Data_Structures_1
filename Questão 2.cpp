#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
int main(){
    struct {
	   int num;
	   char nome[35];
	   float saldo;
	  }conta[15];
	  
	 int i, op, posi, achou, num_conta;
	 float saldo_cliente, menor_saldo;
	 char nome_cliente[35], *n;
	 
	 for (i=0;i<15;i++)
		 { 
		   conta[i].num = 0;
		   n=new char[35];
		   strcpy(conta[i].nome,n);
		   conta[i].saldo = 0;
		 }
	 
	 do{
	 		 system("cls");
	 		 printf("\nMenu de Opçoes");
			 //cout << "\nMenu de Opçoes";
			 printf("\n1 - Cadastrar contas");
			 //cout << "\n1 - Cadastrar contas";
			 printf("\n2 - Visualizar todas as contas de um determinado cliente");
			 //cout << "\n2 - Visualizar todas as contas de um determinado cliente";
			 printf("\n3 - Excluir conta de menor saldo");
			 //cout << "\n3 - Excluir conta de menor saldo";
			 printf("\n4 - Sair");
			 //cout << "\n4 - Sair";
			 printf("\nDigite sua opçao ");
			 //cout << "\nDigite sua opçao ";
			 cin >> op;
			 if ((op < 1) || (op > 4))
			    	printf("\nOpçao Inválida");    
					//cout << "\nOpçao Inválida";
			 if (op == 1)
					{   achou = 0;
						printf("\nDigite o número da conta a ser incluída ");
						//cout << "\nDigite o número da conta a ser incluída ";
						scanf("%d", &num_conta);
						//cin >> num_conta;
						for (i=0;i<15;i++)
							{ 
							if (num_conta == conta[i].num)
							  achou = 1;
							}
					 if (achou == 1)
					 		printf("\nJá existe conta cadastrada com este número");
							//cout << "\nJá existe conta cadastrada com este número";
					 else
							{  
							 posi = -1;
								i = 0;
								while (i < 15)
									{ 
									if (conta[i].num == 0)
											 { 
											 posi = i;
											 i = 15;
											 }
									 i++;
									}
							 if (posi == -1)
							 		printf("\nImpossível cadastrar novas contas");
									//cout << "\nImpossível cadastrar novas contas";
							 else
									{   
									    //cout << "\nDigite o nome do cliente ";
		                                //scanf(" %[^\n]",nome_cliente);
		                                printf("\nDigite o nome do cliente ");
                                        fflush(stdin);
										gets(nome_cliente);
										printf("Digite o saldo do cliente ");
										//cout << "\nDigite o saldo do cliente ";
										scanf("%f",&saldo_cliente);
										//cin >> saldo_cliente;
										conta[posi].num = num_conta;
										strcpy(conta[posi].nome,nome_cliente);
										conta[posi].saldo = saldo_cliente;
										printf("\nConta cadastrada com sucesso");
										//cout << "\nConta cadastrada com sucesso";
									 }
							}
					getch();
				 }
			 if (op == 2)
					{   
						printf("\nDigite o nome do cliente a ser consultado ");
						//cout << "\nDigite o nome do cliente a ser consultado ";
                        fflush(stdin);
						gets(nome_cliente);
						achou = 0;
						for (i=0;i<15;i++)
								{ if (stricmp(conta[i].nome,nome_cliente) == 0)
										 {  
										  	printf("\nNúmero conta: %d - Saldo: %.2f",conta[i].num, conta[i].saldo);
										 	//cout << "\nNúmero conta: " << conta[i].num << " Saldo: " << conta[i].saldo;
											achou = 1;
										 }
								}
						if (achou == 0)
						        printf("\nNao existe conta cadastrada para este cliente");
								//cout << "\nNao existe conta cadastrada para este cliente";
						getch();
					}
				if (op == 3)
					 { i = 0;
					   achou = 0;
					   while (i < 15)
							 { if (conta[i].num != 0)
										{   if (i==0)
											   { 
												   menor_saldo = conta[i].saldo;
												   posi = i;
											    }
											else
												 if (conta[i].saldo < menor_saldo)
														{  
														   menor_saldo = conta[i].saldo;
														   posi = i;
														}
											achou = 1;
										}
								i++;
							}
						if (achou == 0)
						     printf("\nNenhuma conta foi cadastrada");
							 //cout << "\nNenhuma conta foi cadastrada";
						else
							 { 
							    for (i=posi;i<14;i++)
									{ 
										conta[i] = conta[i+1];
									}
								conta[i].num = 0;
								strcpy(conta[i].nome,"\0");
								conta[i].saldo = 0;
								printf("\nConta excluída com sucesso");
								//cout << "\nConta excluída com sucesso";
							 }
					 getch();
					}
	 } while (op!=4);
return 0;
}

