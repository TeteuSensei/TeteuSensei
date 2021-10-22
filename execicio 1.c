
#include <stdio.h>

int main() {
    char x[9];

    printf("Entre com o CEP: ");
    scanf("%s", x);

    int i = 0;
    for (i; i < 8; i++){

        if(i != 5){
            if((int)x[i] > (int)'9' || (int)x[i] < (int)'0'){
                printf("Erro");
                return -1;
            }
        }else{
            if((int) x[i] != (int)'-'){
                printf("Erro");
                return -1;
            }
        }
    }
    printf("Certo");
    return 0;
}