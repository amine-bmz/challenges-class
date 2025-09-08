#include <stdio.h>
#include <stdlib.h>

int main(){
float k, c;
printf("entrez la temperature en degres Celsius\n");
 scanf("%f" , &c);

   k = c + 273.15;

printf("la temperature en kelvin est %.2f k\n", k);
    return 0;
}
