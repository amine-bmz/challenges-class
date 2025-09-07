#include <stdio.h>
#include <stdlib.h>

int main(){
int age;
char nom[20];
char prenom[20];
char sexe;
char email[20];

   printf("entrez votre age!\n");
    scanf("%d" , &age);
   printf("entrez vorte nom!\n");
    scanf("%s" , nom);
   printf("entrez votre prenome!\n");
    scanf("%s" , prenom);
   printf("entrez votre sexe!\n");
    scanf(" %c" , &sexe);
   printf("entrez votre email!\n");
    scanf("%s" , email);

    printf("votre age est %d \n", age);
    printf("votre nom est %s \n", nom);
    printf("votre prenom est %s \n", prenom);
    printf("votre  est %c \n", sexe);
    printf("votre  est %s \n", email);

    return 0;
}

