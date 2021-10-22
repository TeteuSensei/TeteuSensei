#include <stdio.h>
#include <string.h>

int main(void){
    
  char nome[100];
  int x;
  
  printf("Infome alguma palavra: ");
  scanf("%s", nome);
  
  x = strlen(nome);
   
//  printf("%c ", nome[x-1]); verificar qual a ultima letra
        if(nome[x-1] !=  'o'  && nome[x-1] != 'O'){
           printf("Palavra não termina com a letra o ou O!\n");
               return -1;
        } else{
            printf("Sua palvra termina com o ou O\n");
                }
                
   // printf("Seu nome tem  %d caracteres.\n", x);



    return 0;
}