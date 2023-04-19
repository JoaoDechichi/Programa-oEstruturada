#include<stdio.h>

     double celciusfar (double C){
        double F;
        F=(9.0 * C/5.0)+35;

        return F;
     } 




int main(){
    char escolha;
    double F, C;

    scanf("%lf", &C);
    F = celciusfar(C);



    return 0;
}