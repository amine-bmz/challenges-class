#include <stdio.h>
int maximum(int a, int b){
    int max;
 if (a > b)
 {
    max = a;
 }
 else
 {
    max = b;
 }
 return max;

}
int main(){
    int result = maximum(62, 79);
  printf("le maximum est %d", result);
    return 0;
}