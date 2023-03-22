#include<stdio.h>


/*Numero inteiro: “valor”
Numeros reais:
“valor”
“valor”
Letra: “valor”
String: “valor”
Endereço: “valor”*/

int main(){

    int numi;
    double numr1, numr2;
    char letra;
    char palavra[10];

    printf("informe um numero inteiro:");
    scanf("%d", &numi);
    printf("Informe o primeiro valor decimal:");
    scanf("%lf", &numr1);
    printf("informe o segundo valor decimal:");
    scanf("%lf", &numr2);
    printf("Informe uma letra:");
    scanf("%c", &letra);
    printf("informe uma palavra:");
    scanf("%s", palavra);

    printf("Numero inteiro: %d\n", numi);
    printf("Numeros reais:\n %lf\n %lf\n", numr1, numr2);
    printf("Letra: %c\n", letra);
    printf("String: %s\n", palavra);
.
    return 0;
}