#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
   float a, b, c,moy;
   printf("entre le nombre1 :");
      scanf("%f" , &a);
   printf("entre le nombre2 :");
      scanf("%f" , &b);
   printf("entre le nombre3 :");
      scanf("%f" , &c);
      moy = cbrt(a*b*c);
   printf("%.2f",moy);
    return 0;
}
