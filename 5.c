#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <string.h>

int main() {

struct pessoa{
char nome[50];
int idade;
float altura;
char telefone[10];
} 

struct pessoa pessoa; //variável pessoa que será do tipo struct pessoa

int i;

for(i=0; i<5; i++) {
    printf(" Digite nome do amigo: ");
    scanf("%c" &func[i]pessoa.nome);
    printf(" Digite a idade do amigo: ");
    scanf("%d" &func[i]pessoa.idade);
    printf(" Digite a altura do amigo: ");
    scanf("%f" &func[i]pessoa.altura);
    printf(" Digite o telefone do amigo: ");
    scanf("%c" &func[i]pessoa.telefone);
}

for(i=0; i<5; i++) {
    printf(" \n O nome do amigo é: %c ", func[i]pessoa.nome );
    printf(" \n A idade do amigo é: %d ", func[i]pessoa.idade );
    printf(" \n O telefone do amigo é: %c ", func[i]pessoa.telefone );
    printf(" \n A altura do amigo é: %.2f ",func[i] pessoa.altura);
}

}

