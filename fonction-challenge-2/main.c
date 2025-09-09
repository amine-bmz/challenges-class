#include <stdio.h>
int produit(int a, int b)
{
    int p = a * b;
    return p;
}

int main()
{
    int result = produit(7, 2);
    printf("le result de 7 * 2 est %d", result);
    return 0;
}