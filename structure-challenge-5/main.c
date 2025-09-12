#include <stdio.h>
#include <string.h>

struct Livre
{
    char titre[50];
    char auteur[50];
    int annee;
};
struct Livre informatoin(){
    struct Livre l = {"lepetit prince", "antoine de saint exupery", 1943};
    return l;
}

int main(){
  struct Livre livre1;
  livre1 = informatoin();
  printf("titre : %s\n",livre1.titre);
  printf("auteur : %s\n", livre1.auteur);
  printf("annee : %d\n", livre1.annee);
   return 0;
}