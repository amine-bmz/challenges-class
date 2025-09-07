#include <stdio.h>
#include <stdlib.h>

int main(){
 int n, result = 0;
 printf("entre un nombre :");
 scanf("%d" , &n);
for (int i = 1; i <= n; i++){
    result = result + i;

}
printf(" le result est %d\n", result);

    return 0;
}
