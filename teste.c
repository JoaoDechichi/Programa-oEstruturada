#include <stdio.h>

    double teste (double K, double F){
        double C;
        C = K - F + 273.15;

        return C;
    }




int main(){

    double F, C, K;
    scanf("%lf %lf", &K, &F);
    C = teste(K, F);
    printf("%lf", C);


    return 0;
}