
#include <iostream>


int main(){
 int a , b; 
 scanf ("%d %d", &a, &b);
 
if (a < b){
    printf("%d %d %d %d %d %d",a-1, a, a + 1,b-1,b,b+1);
}if(b < a){
    printf("%d %d %d %d %d %d",b-1,b,b+1, a-1, a, a + 1);
}
        
     
    


  
  

    return 0;
}

