#include <stdio.h>

int main()
{
    int mois;
    printf("entrez le nombre de mois entre 1 et 12 :");
    scanf("%d", &mois);
    switch (mois)
    {
    case 1:
        printf("9-junary-2025");
        break;
    case 2:
        printf("9-Février-2025");
        break;
    case 3:
        printf("9-Mars-2025");
        break;
    case 4:
        printf("9-Avril-2025");
        break;
    case 5:
        printf("9-Mai-2025");
        break;
    case 6:
        printf("9-Juin-2025");
        break;
    case 7:
        printf("9-Juillet-2025");
        break;
    case 8:
        printf("9-Août-2025");
        break;
    case 9:
        printf("9-Septembre-2025");
        break;
    case 10:
        printf("9-Octobre-2025");
        break;
    case 11:
        printf("9-Novembre-2025");
        break;
    case 12:
        printf("9-Décembre-2025");
        break;
    default:
    printf("pleaze, entrer un nombre entre 1 et 12");
        break;
    }
    return 0;
}