#include <stdio.h>
#include <string.h>

int main(){

  char word[40];
   int n, j; 
   char tmp;

   printf("entre un words :");
   fgets(word, sizeof(word), stdin);
   int sup = strlen(word);
   if (word[sup -1] == '\n')
   {
    word[sup - 1] = '\0';
    sup--;
   }
   
   n = 0;
   j = sup - 1;
   while (n < j)
   {
     tmp = word[n];
     word[n] = word[j];
     word[j] = tmp;
     n++;
     j--;
   }
  printf("the word inverse est :%s", word);
    return 0;
}