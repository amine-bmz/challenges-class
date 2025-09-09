#include <stdio.h>
#include <string.h>

int main()
{

    char mot[] = "AMINE";
    char mot__[] = "-----";
    char lettre;
    int i;
    while (1)
    {
        printf("%c\n", mot__);
        printf("donner la leetre :\n");
        scanf("%s", lettre);

        for (i = 0; mot[i] != '\0' < 0; i++)
        {
            if (mot[i] == lettre)
            {
                mot__[i] = lettre;
            }
        }
        if (mot == mot__)
        {
            printf("le mot est vree");
        }
    }

    return 0;
}