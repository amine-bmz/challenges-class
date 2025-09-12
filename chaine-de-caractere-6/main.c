#include <stdio.h>
#include <string.h>

int main(){
char word[40];
char letr;
int i, compt = 0;
printf("entre un chain de caractere :");
fgets(word, sizeof(word), stdin);

printf("entre le lettre :");
scanf("%c", &letr);

for (i = 0; word[i] != '\0'; i++){
   if (word[i] == letr){
     compt++;
   } 
}

printf("le caractere %c est repete %d foit", letr, compt);

    return 0;
}