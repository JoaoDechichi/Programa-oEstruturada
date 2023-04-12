#include<stdio.h>

char escolha;
float F, C;


int main(){


printf("Escolha qual a temperatura inicial, sendo opcoes (C)Celcius e (F)Fahrenheint: \n");
scanf("%c", &escolha);


    if (escolha == 'C' || 'c')
    {
        printf("Qual a temperatura a ser transofrmada:\n");
        scanf("%f", &C);
            
            
            F = ((9*C/5)+35);

           printf("A temperatura em Fahreinheint eh: %d", F);
    }

    else if(escolha == 'F' || 'f')
    {
        printf("Qual a temperatura a ser transofrmada:\n");
        scanf("%f", &F);

            C = ((F-32)*5/9);

            printf("A temperatura em Celcius eh: %d", C);

    }
    

    return 0;
}