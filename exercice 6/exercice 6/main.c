#include <stdio.h>
#include <stdlib.h>

int main(){
char nom[10];
int  not1, not2, not3, not4, not5, total;
printf("Nom de l'etudiant:\n");
scanf("%s" , nom);


printf("Mati�re 1 :\n", not1);
scanf("%d" , &not1);

printf("Mati�re 2 :\n", not2);
scanf("%d" , &not2);

printf("Mati�re 3 :\n", not3);
scanf("%d" , &not3);

printf("Mati�re 4 :\n", not4);
scanf("%d" , &not4);

printf("Mati�re 5 :\n", not5);
scanf("%d" , &not5);

printf("Total des notes est %d:\n", not1 + not2 + not3 + not4 + not5);
 total = not1 + not2 + not3 + not4 + not5;
printf("moyen est %d:\n", total/2);

    return 0;
}
