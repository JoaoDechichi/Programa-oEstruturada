#include <stdio.h>


int main(){

    float N, count;

    printf("\nInforme um valor para atribuir a N: ");
    scanf("%f", &N);

    for(count=0; count<=N; count++){

        printf("%.2f\n", count);
    }



    return 0;
}