#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, a = 0;
  printf("entrer un nombre\n");
  scanf("%d" ,&n);
  for (int i = 1; i <= n; i++){
    a = a + i;
  }
  printf("le result est %d",a);
    return 0;
}
