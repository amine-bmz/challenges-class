#include <stdio.h>
#include <string.h>

struct Rectangle
{
    float longueur;
    float largeur;
};
    float calculeAire(struct Rectangle r)
{
    return r.longueur * r.largeur;
};
int main()
{
    struct Rectangle r;
    float aire;
    printf("entre la largeur :");
    scanf("%f", &r.largeur);
    printf("entre la longueur :");
    scanf("%f", &r.longueur);

    aire = calculeAire( r);

    printf("l'aire du rectangle est : %.2f", aire);
    return 0;
}