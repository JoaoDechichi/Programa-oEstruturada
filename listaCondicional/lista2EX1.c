
#include <stdio.h>

int main()
{
    float x, y;
    printf("Insira o primeiro numero: ");
    scanf("%f", &x);
    printf("Insira o segundo numero: ");
    scanf("%f", &y);
    if (x > y)
        printf("%.2f é maior que %.2f", x, y);
    else
        (y > x);
            printf("%.2f é maior que %.2f", y, x);

    return 0;
}
