#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, facteur, tai;

    printf("entree le nombre des element :");
    scanf("%d", &n);
    int tableau[n];

    for(int i = 0; i < n; i++)
    {
        printf("donner le %d l'element", i + 1);
        scanf("%d", &tableau[i]);
    }
    printf("donner le facteur :");
    scanf("%d", &facteur);

    int tableau_fact[n];
    for (int i = 0; i < n; i++)
    {
        tableau_fact[i] = tableau[i] * facteur;
    }
    for (int i = 0; i < n; i++)
    {
        printf("le produit du element %d avec le facteur %d est :%d\n",  tableau[i], facteur, tableau_fact[i]);
    }

    return 0;
}
