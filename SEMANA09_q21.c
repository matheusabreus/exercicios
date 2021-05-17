#include <stdio.h>
int main() {
  int aux=0, n[100], i=0, a=1;
  for(i=0; i<10; i++){
        scanf("%d", &n[i]);}
  for (i=0; i<10; i++){
    if (n[i] == n[i+1]){
          aux++;
    if (a < aux){
        a = aux;
    }}}
    
printf ("%d", a);
    
}
