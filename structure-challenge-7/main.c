#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    int jour;
    int mois;
    int annee;
} Date;
int main(){
   Date d1;
  
   Date *ptr = &d1;
  
  ptr -> jour = 15;
  ptr -> mois = 9; 
  ptr -> annee = 2025;
    printf("la date est : %d/%d/%d\n", ptr->jour, ptr->mois, ptr->annee);
  

    return 0;
}
