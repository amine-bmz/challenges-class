#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    float rayon;
}Cercle;

void cercleaire( Cercle c)
{
    float aire = 3.14159 * c.rayon * c.rayon;
    printf("l'aire de cercle est :%.2f", aire);
}
int main(){
 
 Cercle c1;

 printf("entre le reyon du cercle :");
 scanf("%f", &c1.rayon);
 cercleaire(c1);
    return 0;
}