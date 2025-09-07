#include <stdio.h>

int main()
{
    char letre;
    printf("entrer un lettre :");
    scanf("%c", &letre);

    if ((letre >= 'A' && letre <= 'Z') || (letre >= 'a' && letre <= 'z'))
    {
        printf("la lettre est alphabetique\n");

        if (letre >= 'A' && letre <= 'Z')
        {
            printf("la lettre est majuscule\n");
        }
        else
        {
            printf("la lettre est minuscule\n");
        }
    }
    else
    {
        printf("error :pleaze entrer un lettere!");
    }
    return 0;
}