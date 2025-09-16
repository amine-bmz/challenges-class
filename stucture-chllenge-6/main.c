#include <stdio.h>
#include <string.h>

struct Produit
{
    char nom[20];
    int quantite;
    float prix;
};
int main(){
  struct Produit produits[50];
  int n;

 printf("entre le nombre de produit :");
 scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
  printf("entre le nom de produit :");
   scanf("%s", produits[i].nom);
  printf("entre le prix de produit :");
   scanf("%f", &produits[i].prix);
  printf("entre la quantite de produit :");
   scanf("%d", &produits[i].quantite);
  }
for (int j = 0; j < n; j++)
{
    printf("ijijioio";);
   scanf("%f", prix);
}

    return 0;
}

