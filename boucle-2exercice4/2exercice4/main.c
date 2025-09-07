#include <stdio.h>

int main() {
    int n, rev = 0, rem;

    printf("entre un nombre reel: ");
    scanf("%d", &n);

    for(n != 0;  rem = n % 10;  rev = rev * 10 + rem){
        n = n / 10;
    }
    printf("le nombre reverse est: %d\n", rev);

    return 0;
}
