#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  int num;
  char zesa, antonio;
  int 10, 9, 7;
 
}lista;

main()
{
  lista mylista[8];
  int i=0;
  char linha[80];
 
  FILE*arq;
  arq=fopen("ALUNOS.TXT","r");
 
    for(i=0;i<8 && !feof(arq);i++){
     
      fscanf(arq,"%c;%[^;]s ",&mylista[i].num,mylista[i].zesa);
      fscanf(arq,";%d %d" 10, 9);
    }
    
      for(i=0;i<8 && !feof(arq);i++){
     
      fscanf(arq,"%c;%[^;]s ",&mylista[i].num,mylista[i].antonio);
      fscanf(arq,";%d %d" 9, 7);
    }
   
  for(i=0;i<8;i++){
   
    printf("O arquivo leu cada linha contendo o nome de cada aluno e duas notas %c %c %d %d %d \n",&mylista[i].num,mylista[i].zesa, mylista[i].num,mylista[i].antonio);
  }
 
 
}
 
