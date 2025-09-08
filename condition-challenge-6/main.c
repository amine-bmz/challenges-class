#include <stdio.h>

int main(){
int a;
printf("entrer un nombre :");
scanf("%d", &a);

if (a < 0)
{
   printf("le nombre est negative");
}
 else if (a == 0)
{
    printf("le nombre est nul");
}
else
{
    printf("le nombre est positif");
}
    return 0;
}