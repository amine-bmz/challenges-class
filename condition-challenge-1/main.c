#include <stdio.h>

int main(){
    int num;
   printf("enrer un nombre :");
   scanf("%d", &num);

   if (num % 2 == 0)
   {
    printf("le nombre est pair");
   }
   else {
    printf("le nombre est impair");
   }
   
    return 0;
}