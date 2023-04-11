#include <stdio.h>
#include <math.h>

int main()
{
    float numero, raiz, quadrado;
    scanf("%f", &numero);
    raiz = sqrt(numero);
    quadrado = numero * numero;
    if (numero > 0)
        printf("%.2f ao quadrado é %.2f e a raiz de %.2f é %.2f", numero, quadrado, numero, raiz);
    else
        printf("Número negativo");

            return 0;
}