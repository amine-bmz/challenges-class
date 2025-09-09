#include <stdio.h>
int somme (int a , int b) {
int s = a+b;
return s;
}

int main(){
  int result = somme (3, 9);
  printf("la somme de 3 + 9 est %d", result);

    return 0;
}