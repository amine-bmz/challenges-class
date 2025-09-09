#include <stdio.h>

int main()
{
    int tai,min;

    printf("donner la taille du tableau :");
    scanf("%d",&tai);
    int tableau[tai];

    printf("entree le 1 element:");
    scanf("%d",&tableau[0]);
    min = tableau[0];
    for (int i = 1; i < tai; i++)
    {
        printf("enree le %d element:",i+1);
        scanf("%d", &tableau[i]);
        if (min > tableau[i])
        {
             min = tableau[i];
        }

    }
    printf("le nombre le plus petit dans le tableau est :%d", min);

    return 0;
}
