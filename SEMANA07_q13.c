#include <stdio.h>

int main()
{
    int a, n1=0,n2=0,n3=0, t;
   
   
   do {  scanf("%d", &a);
       if (a > n1){
           n3 = n2;
           n2 = n1;
           n1 = a;
           }
       else if (a > n2){
           n3 = n2;
           n2 = a;
              }
       else if (a > n3){
            n3 = a;
        }
       if (n2 == 0){
           n2 = -1;
       }
       if (n3 == 0){
           n3 = -1;
       }
   }
   while (a != 0 ) ;
   printf ("%d %d %d", n1,n2,n3);
   
   

}
