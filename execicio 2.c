#include <stdio.h>

int main() {
    char x[] = {'a','a','a','a','a','a','a','a','a','a','a','a','a','a'};

    printf("Entre com o CPF: ");
    scanf("%s", x);

    int i = 0;
    int countnum = 0;
    int countcarac = 0;
    for (i; i <= 14; i++){

       //printf("%c %d\n", x[i],(int)x[i] );

        if(x[i] == 'a'|| x[i] == '\n' ||  (int)x[i] == 0 )
            break;

        if((int)x[i] <= (int)'9' && (int)x[i] >= (int)'0')
            countnum += 1;
        else{
            if((int) x[i] == (int)'-' ||  (int) x[i] == (int)'.')
                countcarac += 1;
            else{
                printf("Errado!\n");
                return -1;
            }
        }
    }

    if(countcarac > 0){
        if(x[3] != '.',  x[7] != '.' || x[11] != '-'){
            printf("Errado\n");
            return -1;
        }
    }

    if(countnum != 11){
        printf("Errado\n");
        return -1;
    }


    //printf("num: %d carac: %d\n", countnum, countcarac);
    printf("Certo\n");
    
     return 0;
}