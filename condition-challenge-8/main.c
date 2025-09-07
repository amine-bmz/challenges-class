#include <stdio.h>

int main()
{

    int moyenne;
    printf("entrer sa moyenne :");
    scanf("%d", &moyenne);
    
    if (moyenne < 10)
    {
        printf("Echec");
    }
    else if (moyenne >= 10 && moyenne < 12)
    {
        printf("Passable");
    }
    else if (moyenne >= 12 && moyenne < 14)
    {
        printf("Assez Bien");
    }
    else if (moyenne >= 14 && moyenne < 16)
    {
        printf("Bien");
    }
    else if (moyenne >= 16)
    {
        printf("tree Bien");
    }
    else if (moyenne < 0 && moyenne < 20)
    {
        printf("le moyenne est fause !!");
    }
    
    return 0;
}