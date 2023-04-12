#include<stdio.h>

char escolha;
int F, C;


int main(){


printf("Escolha qual a temperatura inicial, sendo opcoes (C)Celcius e (F)Fahrenheint: \n");
scanf("%c", &escolha);


    if (escolha == 'C' || 'c')
    {
        printf("Qual a temperatura a ser transofrmada:\n");
        scanf("%d", &C);
            
            
            F = ((9*C/5)+35);

           printf("A temperatura em Fahreinheint eh: %d", F);
    }

    else if(escolha == 'F' || 'f')
    {
        printf("Qual a temperatura a ser transofrmada:\n");
        scanf("%d", &F);

            C = ((F-32)*5/9);

            printf("A temperatura em Celcius eh: %d", C);

    }
    

    return 0;
}