#include <stdio.h>

int main()
{
    char sexo;
    float h, peso;
    printf("Insira o seu sexo M para masculino e F para feminino: ");
    scanf("%c", &sexo);
    if (sexo == 'm' || sexo == 'M')
    {
        printf("Insira seu peso: ");
        scanf("%f", &peso);
        printf("Insira sua altura em centímetros: ");
        scanf("%f", &h);
        printf("Seu peso ideal é: %.2f", ((72 * h) - 58));
    }
    else if (sexo == 'f' || sexo == 'F')
    {
        printf("Insira seu peso: ");
        scanf("%f", &peso);
        printf("Insira sua altura em centímetros: ");
        scanf("%f", &h);
        printf("Seu peso ideal é: %.2f", ((62.1 * h) - 44.7));
    }
    else
        printf("Insira um caractere correto");

    return 0;
}