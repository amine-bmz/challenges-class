#include <stdio.h>
#include <string.h>

int main(){
  char word[40]; 
   int i, j = 0;
  printf("entre un chain :");
  fgets(word, sizeof(word), stdin);

  word[strcspn(word, "\n")] = 0;
  for(i = 0; word[i] != '\0'; i++)
  {
    if(word[i] != ' ') {
      word[j++] = word[i];
    }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
  }
  word[j] = '\0';

  printf("la chain sans espace est : %s\n", word);

  return 0;
}