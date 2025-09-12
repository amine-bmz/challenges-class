#include <stdio.h>
#include <string.h>

struct Etudiant
{
    char prenom[20];
    char nom[20];
    int notes[20];
    int credit;
    int age;
    int moyenne;
    int code;

};
int main()
{
    struct Etudiant[50];
    int i, j, n;
    printf("entre le nombre de les etudiant :");
     scanf("%d", &n);
    
    for (i = 0; i < n; i++)
    {
        printf("entre le prenom :");
        scanf("%s",  Etudiant[i].prenom);
        printf("entre le nom :");
        scanf("%s",  Etudiant[i].nom);
        printf("entre l'age :");
        scanf("%d", &Etudiant[i].age);
        printf("entre le moyenne :");
        scanf("%d", &Etudiant[i].moyenne);
    }
    for (j = 0; j < n; j++)
    {
        printf("entre les le code :");
        scanf("%d", &etudiant[j].code);
        printf("entre le nom :");
        scanf("%s", etudiant[j].nom);
        printf("emtre le credit :");
        scanf("%d", &etudiant[j].credit);
        printf("entre la note :");
        scanf("%d", &etudiant[j].notes[j]);
    }
      for (i = 0; i < n; i++) {
        printf("Etudiant [%d] :\n", i + 1);
        printf("Nom    : %s\n", etudiant[i].nom);
        printf("Prenom : %s\n", etudiant[i].prenom);
        printf("Age    : %d\n", etudiant[i].age);
        printf("Moyenne: %d\n", etudiant[i].moyenne);
    }
     for (j = 0; j < n; j++) {
        printf("Etudiant [%d] :\n", i + 1);
        printf("code   : %d\n", etudiant[j].code);
        printf("nom   : %s\n", etudiant[j].nom);
        printf("credit : %d\n", etudiant[j].age);
        printf("notes  : %d\n", etudiant[j].notes);
     }
        return 0;
    }
    

