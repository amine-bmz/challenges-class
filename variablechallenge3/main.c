#include <stdio.h>
#include <stdlib.h>

int main(){
float yards, km;
printf("entrez la distance en km\n");
 scanf("%f" , &km);

   yards = km * 1093.61;

printf("la distance en yards est %.2f yaeds\n", yards);
    return 0;
}
