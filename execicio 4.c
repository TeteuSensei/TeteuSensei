#include <stdio.h>
#include <string.h>

int main(void){
    
  char nome[100];
  int x;
  char validar [] = {'a','b','b','b'};
  
  printf("Infome alguma palavra: ");
  scanf("%s", nome);
  
  x = strlen(nome);
  
  int i= 0;
  if (x!= 4){
       printf("Palavra não confere\n");
       return -1;
  }
   for (i;i<x; i++){
       // printf("%c %c\n" ,nome[i], validar[i]);
      if(validar[i] != nome[i]){
        printf("Palavra não confere\n");
        return -1;
      }
   }
    printf("Palavra confere");

}