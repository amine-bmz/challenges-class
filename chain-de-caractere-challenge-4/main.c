#include <stdio.h>
#include <string.h>

int main()
{
    char words1[40];
    char words2[40];

    printf("entre la premier words :");
    fgets(words1, sizeof(words1), stdin);
    printf("entre la deuxième words :");
    fgets(words2, sizeof(words2), stdin);

    words1[strcspn(words1, "\n")] = '\0';
    words2[strcspn(words2, "\n")] = '\0';
    if (strcmp(words1, words2)==0)
    {
        printf("les words son Similaire");
    }
    else
    {
        printf("les words son different");
    }
    return 0;
}