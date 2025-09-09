#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int tableax[n];
    printf("entree un nombre :");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("pleaze entrez d'autre nombre");
    }
    for (int i = 0; i < n; i++)
    {
        printf("entrer l'element%d :r", i+1);
        scanf("%d", &tableax[i]);
    }
    if (n != 0)
    {
        printf("les nombre du tableax est:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d", tableax[i]);
        }
    }
    printf("\n");

    return 0;
}
