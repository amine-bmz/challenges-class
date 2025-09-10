#include <stdio.h>
#include <string.h>

int main(){
  char words1[40];
  char words2[40];

printf ("entre la premier words :");
fgets(words1, sizeof(words1), stdin);
printf("entre la deuxième words :");
fgets(words2, sizeof(words2), stdin);
strcat(words1, words2);
puts(words1);
    return 0;
}