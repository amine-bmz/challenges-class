#include <stdio.h>
#include <string.h>

struct point 
{
    int x;
    int y;
};

int main()
{
  struct point *ptr;

  printf("entre la cordonnee x :");
  scanf("%d", &ptr->x);
  printf("entre la cordonnee y :");
  scanf("%d", &ptr->y);

  printf("les cordonnee du x est : %d\n",ptr->x);
  printf("les cordonnee du y est %d\n", ptr->y);
   return 0;
}