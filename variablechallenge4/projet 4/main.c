#include <stdio.h>
#include <stdlib.h>

int main()
{
float  m, km;
    printf("enter la vitesse en km/h !\n");
    scanf("%f" , &km);
     m = km * 0.27778;
     printf("la vitesse en m/s est %.3f m/s\n", m);
    return 0;
}
