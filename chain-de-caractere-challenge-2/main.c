#include <stdio.h>
#include <string.h>

int main(){
  char words[50];
  printf("entre un chain :");
  fgets(words, sizeof(words), stdin);
  int n = strlen(words);
  printf("%d", n);

    return 0;
}