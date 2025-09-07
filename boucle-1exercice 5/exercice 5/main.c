#include <stdio.h>
#include <stdlib.h>

int main(){
int i, n, c;
int r = 1;
printf("entrer la base :");
 scanf("%d" , &i);
 printf("entrer l'exposant :");
 scanf("%d" , &n);
 for (int c = 1; c <= n; c++){
      r = r * i;

 }
  printf("%d ^ %d = %d",i, n, r);
    return 0;
}
