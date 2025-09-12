#include <stdio.h>
struct personne {
char nom[10];
char prenom[10];
int age;
};
    int main(){
    struct personne p1;
     printf("entre le prenom :");
   scanf("%s", p1.prenom);
    printf("entre le nom :");
    scanf("%s", p1.nom);
    printf("entre l'age :\n");
    scanf("%d", &p1.age);

    printf("le prenom est : %s\n", p1.prenom);
    printf("le nom est : %s\n", p1.nom);
    printf("l'age est : %d\n", p1.age);        
 return 0;
}