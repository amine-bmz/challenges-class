#include <stdio.h>
#include <stdlib.h>

int main(){
 int a;
 printf("entrer un nombre\n");
  scanf("%d" , &a);

 for (int b = 1; b <= 10; b++){
  printf("%d * %d = %d\n", a, b,a * b);
 }
    return 0;
}
