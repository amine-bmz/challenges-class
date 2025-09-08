#include <stdio.h>
#include <stdlib.h>

int main()
{
float t;
printf("entrez la Température!\n");
 scanf("%f" , t);
 if (t < 0){
    printf("solide");
    scanf("%f" , t);
}
 else if (0 <= t < 100){
    printf("Liquide");
    scanf("%f" , t);
 }
 else if(t >= 100){
    printf("Gaz");
    scanf("%f" , t);
 }

    return 0;
}
