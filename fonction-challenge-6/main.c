#include <stdio.h>
long long fibonacci(int n)
{
    if (n == 0)
        return 0;

    else if (n == 1)
        return 1;

    else 
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    printf("enrer un nombre :");
    scanf("%d", &n);
  
    printf("fibonacci F(%d) = %lld\n", n, fibonacci(n));
    return 0;
}