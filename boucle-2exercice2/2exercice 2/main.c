#include <stdio.h>
#include <stdlib.h>

int main(){
  int num, i, j;
  printf("entre un nombre :");
  scanf("%d" , &num);
  for (i = 1; i <= num; i++){
        for (j = 1; j <= num -i; j++){
         printf("  ");
        }
        for (j = 1; j <= 2 * i - 1; j++){
            printf(" *");
        }
   printf("\n");
  }
    return 0;
}
