#include <stdio.h>
#include <stdlib.h>

int main(){
  int num, c, i = 10;
  printf("enter un nombre :\n");
  scanf("%d" , &num);
  while (i > 0) {
   c = num * i;
     printf("%d * %d = %d\n", num, i, c);
      i--;
  }
    return 0;
}
