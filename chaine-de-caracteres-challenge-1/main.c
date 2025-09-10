#include <stdio.h>
int main(){
char words[40];

printf("entre une chain :");
fgets(words, sizeof(words), stdin);
printf("vous avez ecrit :%s", words);

    return 0;
}