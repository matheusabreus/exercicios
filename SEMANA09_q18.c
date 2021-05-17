 #include <stdio.h>

 int main(){
 int t=10000, desc[t], i;
 scanf("%d", &t);
    for (i=0; i<t; i++){
        scanf("%d", &desc[i]);
        }
        t-=1;
    for(i=t; i>=0; i--){
        printf("%d ", desc[i]);
        }
        }
