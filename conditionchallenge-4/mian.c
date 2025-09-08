#include <stdio.h>

int main()
{
    int a, b, c, lequation, delta;
    int x;
    printf("entrer le nombre a le l'equation :");
    scanf("%d", &a);
    printf("entrer le nombre b le l'equation :");
    scanf("%d", &b);
    printf("entrer le nombre c le l'equation :");
    scanf("%d", &c);
   
    delta = b * b - 4 * a * c;
    if (delta > 0)
    {
        printf("Deux solutions réelles distinctes\n");
    }
    else if (delta == 0)
    {
        printf("Une solution double\n");
    }
    else
    {
        printf("Pas de solution reelle\n");
    }
    return 0;
}