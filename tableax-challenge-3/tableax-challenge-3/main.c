#include <stdio.h>
#include <stdlib.h>

int main()
{
  int somm = 0, n;
  printf("entrez les nombre des elements :");
   scanf("%d", &n);
   int tableau[n];
   for (int i = 0; i < n; i++){
    printf("entree les element %d" :, i+1);
    scanf("%d", &tableau[i]);
   }
   for(int i = 0; i < n; i++){
    somm += tableau[i];
   }
   printf("le somme des elements est %d", somm);

    return 0;
}
