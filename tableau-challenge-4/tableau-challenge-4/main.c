#include <stdio.h>

int main()
{
    int tai,max;

    printf("donner la taille du tableau :");
    scanf("%d",&tai);
    int tableau[tai];

    printf("entree le 1 element:");
    scanf("%d",&tableau[0]);
    max = tableau[0];
    for (int i = 1; i < tai; i++)
    {
        printf("enree le %d element:",i+1);
        scanf("%d",&tab[i]);
        if (max < tableau[i])
        {
            max = tableau[i];
        }

    }
    printf("le nombre le plus grand dans le tableau est :%d", max);

    return 0;
}
