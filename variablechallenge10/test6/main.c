#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a, b, c, d, e, f, dist;
    printf("entrer a et b et c :\n");
        scanf("%f", &a);
        scanf("%f", &b);
        scanf("%f", &c);
    printf("entrer d et e et f :\n");
        scanf("%f", &d);
        scanf("%f", &e);
        scanf("%f", &f);
    dist = sqrt((d - a)*(d - a) + (e - b)*(e - b) + (f - c)*(f - c));
      printf("la distance est :%.2f", dist);
    return 0;
}
