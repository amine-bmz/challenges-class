#include <stdio.h>
#include <stdlib.h>

int main(){
float longueur, largeur, surface;
printf("entere la largeur :");
scanf("%f", &largeur);
printf("entere la longueur :");
scanf("%f", &longueur);
surface = longueur * largeur;
printf("%.2f", surface);

    return 0;
}
