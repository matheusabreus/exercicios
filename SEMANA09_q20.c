#include <stdio.h>
int main() {
  int aux, a[10], i, j;
    for(i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }
    for(i =0; i < 10-1; i++){
    for (j=i+1; j<10; j++){
      if (a [i]>a[j]){
        aux = a[i];
        a[i] = a[j];
        a[j] = aux;
      }}}
    for (i=0; i<10; i++){
        printf("%i ", a [i]);
    }
        printf("\n");
    for (i=10-1; i>=0; i--){
        printf("%i ", a[i]);
    }}
