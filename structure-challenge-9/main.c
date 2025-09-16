#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct 
{
    char nom[50];
    float solde;
    
}Compte;

void entreCompte (Compte *c, float montant)
{
    c->solde += montant;
}
int main(){
  Compte c1;
float montant;
    printf("entre le nom :");
    fgets(c1.nom, sizeof(c1.nom), stdin);

    printf("entre le solde :");
    scanf("%f", &c1.solde);

    printf("entre le montant :");
    scanf("%f", &montant);

    entreCompte(&c1, montant);

  printf("\n--- Resultat ---\n");
    printf("Nom    : %s", c1.nom);
    printf("Solde final : %.2f\n", c1.solde);
    return 0;
}