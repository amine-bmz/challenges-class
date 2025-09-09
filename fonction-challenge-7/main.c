#include <stdio.h>
#include <string.h>

void inverser_mot (char str[]) {
    int i = 0;
    int j = strlen(str) - 1;
    char impt;

    while (i < j) {
        impt = str[i];
        str[i] = str[j];
        str[j] = impt;
        i++;
        j--;
    }
}
int main() {
    char mot[30];

    printf("Entrer une mot : ");
    scanf("%s", mot);

    inverser_mot(mot);

    printf("mot inversée : %s\n", mot);

    return 0;
}