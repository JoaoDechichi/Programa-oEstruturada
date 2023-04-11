#include <stdio.h>

int main()
{
    int x;
    printf("Insira um número: ");
    scanf("%d", &x);
    if (x % 2 == 0)
    {
        printf("%d é um número par.", x);
    }
    else
    {
        printf("%d é um número ímpar.", x);
    }

    return 0;
}