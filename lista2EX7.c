#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("recebendo 4 valores:");
    scanf("&d", a);
    scanf("&d", b);
    scanf("&d", c);
    scanf("&d", d);

    if (a ==0 &&b ==0 &&c ==0 &&d ==0)
    {
        if (c < b && d < a && (c + d) > (a + b) && a % 2 == 0)
        {
            printf("Valores aceitos");
        }
        else
        {
            printf("Valores Nao aceitos");
        }
    }
    else
    {
        printf("Valores Nao aceitos");
    }

    return 0;
}