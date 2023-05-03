#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char opcao[3];
    int vetor[80], i, nBusca, posicao[80], contador=0;

    do{
        printf("digite um valor\n");
        scanf("%d", &vetor[i]);
        i++;
        printf("quer continuar? sim ou nao.");
        scanf("%c", &opcao);


    }while (strcmp(opcao,"sim")==0 && i<80);
    

    printf("Digite um  numero:\n");
    scanf("%d", &nBusca);

    for(i=0;i<6;i++){
        if(nBusca == vetor[i]){
            posicao[contador]=i;
            contador++;
        }
    }
    printf("%d", contador);

    for(i=0;i<contador;i++){
        printf("%d", posicao[i]);
    }


    return 0;
}