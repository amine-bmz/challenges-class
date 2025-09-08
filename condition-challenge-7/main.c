#include <stdio.h>

int main()
{
    char let;
    printf("entrer un lettre :");
    scanf("%c", &let);

    if (let >= 65 && let <= 90)
    {
        printf("la lettre est majuscule :");
    }
    else if (let >= 'a' && let <= 'z')
    {
        printf("le nombre est minuscule :");
    }
    else
    {
        printf("error :pleaze entrer un lettere!!");
    }
    return 0;
}