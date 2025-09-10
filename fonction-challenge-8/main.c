#include <stdio.h>
int est_pair(int nombre)
{
    if (nombre % 2 == 0)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    int nombre;
    printf("entrer un nombre :");
    scanf("%d", &nombre);

    if (est_pair(nombre))
    {   
        printf("pair");
    }
    else
    {
        printf("impair");
    }
    return 0;
}
