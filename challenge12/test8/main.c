#include <stdio.h>
#include <stdlib.h>

int main(){
  int nombre, result;
  printf("entrer les 4 nombre :");
  scanf("%d" , &nombre);
  result = (nombre % 10) * 1000  
      + ((nombre / 10) % 10) * 100  
      + ((nombre / 100) % 10) * 10  
      + (nombre / 1000);
      printf("%d", result);
    return 0;
}
