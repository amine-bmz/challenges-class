#include <stdio.h>
int minimum(int a, int b)
{
    int min;
    if (a < b)
    {
        min = a;
    }
    else
    {
        min = b;
    }

    return min;
}
int main()
{
    int result = minimum(33, 34);
    printf("le minimume est %d", result);

    return 0;
}