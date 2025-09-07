#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float r, volume;
    const float p = 3.14159;
    printf("enre le reyon de la spher :");
    scanf("%f", &r);
    volume = (4/3.0)* ( p * pow(r,3.0));
    printf("le volume est :%.2f", volume);
    return 0;
}
