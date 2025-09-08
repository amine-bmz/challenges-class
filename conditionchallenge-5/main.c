#include <stdio.h>

int main()
{
    int an, annee = 0, choix;
    printf("entree le nombre des annees :");
    scanf("%d", &an);
    printf("Choisissez le type de conversion:\n1-Mois\n2-Jours\n3-Heures\n4-Minutes\n5-Secondes\n");
scanf("%d", &choix);

    switch (choix)
    {
    case 1:
        printf("Conversion en mois :%d\n", an * 12);
        break;
    case 2:
        printf("Conversion en jours :%d\n", an * 365);
        break;
    case 3:
        printf("Conversion en heurs :%d\n", an * 8760);
        break;
    case 4:
        printf("Conversion en minute:%d\n", an * 365 * 24 * 60);
        break;
    case 5:
        printf("Conversion en second:%d\n", an * 365 * 24 * 60 * 60);
        break;
    default:
    printf("option error");
        break;
    }
    return 0;
}