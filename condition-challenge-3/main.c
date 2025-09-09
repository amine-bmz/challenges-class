#include <stdio.h>

int main()
{
    int num1, num2, result;
    printf("entrer le nombre 1 :");
    scanf("%d", &num1);
    printf("entrer le nombre 2 :");
    scanf("%d", &num2);
    result = num1 + num2;

    if (num1 == num2)
    {
        printf("%d\n", result * 3);
    }
    else
    {
        printf("%d\n", result);
    }
    return 0;
}