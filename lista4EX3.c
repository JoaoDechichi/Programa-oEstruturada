#include <stdio.h>

int main(){

    int numi, numf, i;

printf("Insira o valor inicial:\n ");
scanf("%d", &numi);

printf("insira o valor final:\n ");
scanf("%d", &numf);

if(numi%2==0){
    for (numi; numi<numf; numi+=2)
    {
            printf("%d\n", numi);
    }
    
}
else{


    for (numi; numi<numf; numi+=2)
    {
            printf("%d\n", numi);
    }
    
}
    
    








    return 0;
}