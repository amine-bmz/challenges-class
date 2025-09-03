#include <stdio.h>

int main(){
  int i, n;
    printf("entrer un nomber");
    scanf("%d" , &i);
   for(int n = 1; n <= i; n++){
  printf("%d\n", 2 * n - 1);
  }
    return 0;
}
