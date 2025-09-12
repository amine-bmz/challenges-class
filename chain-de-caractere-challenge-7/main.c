#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char word[40];

    printf("entre un caractere :");
    fgets(word, sizeof(word), stdin);

    for (int i = 0; word[i] != '\0'; i++)
        printf("%c", toupper(word[i]));

    printf("le caractere en majuscule est %c", word);
    return 0;
}