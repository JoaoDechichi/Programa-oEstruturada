#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1[5], n2[5];
    int i, soma[5];

    for(i=0; i<5; i++){
        scanf("%f%f", &n1[i], &n2[i]);

        soma[i]=n1[i]+n2[i];
        printf("%f\n", soma[i]);

       if(soma[i]%2==0){
                    printf("%f + %f = %d - par",n1[i], n2[i], soma[i]);
        }
        else{
                    printf("%f + %f = %d - impar",n1[i], n2[i], soma[i]);
        }
    }



    return 0;
}