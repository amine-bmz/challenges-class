#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
  int n, a;
  printf("entrer un nombre\n");
  scanf("%d" ,&n);
  i = 0;
  a = 0;
  for (int i = 1; i <= n; i++){
    a = a + i;
  }
  printf("le result est %d",a);
    return 0;
}
