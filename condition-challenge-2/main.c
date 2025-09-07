#include <stdio.h>

int main()
{
    char car;
    printf("entere un caractere :");
    scanf("%c", &car);

    switch (car)
    {
    case 'a':
        printf("le nombre est voyelle");
        break;
    case 'e':
        printf("le nombre est voyelle");
        break;
    case 'i':
        printf("le nombre est voyelle");
        break;
    case 'o':
        printf("le nombre est voyelle");
        break;
    case 'u':
        printf("le nombre est voyelle");
        break;

    default:
        printf("la lettre n'est pas voyelle");
        break;
    }
    return 0;
}