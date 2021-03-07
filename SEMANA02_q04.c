
#include <iostream>


int main(){
 int a , b, c, d; 
 scanf ("%d %d %d", &a, &b, &c);
 
 if ((a == 1 && b == 1) || (a == 1 && c ==1) || (b ==1 && c ==1 )){
     printf("APROVADO COM A ");
 }if ((a == 2 && b == 2 ) || (a == 2 && c ==2) || (c ==2 && b ==2)){
     printf("APROVADO COM B");
 }if ((a == 3 && c == 3) || (b == 3 && a ==3) || (b == 3 && c ==3)) {
     printf("APROVADO COM C");
 }if ( a != b && b != c && a != c){
     printf("INCONCLUSIVO");
 }else if ((a == 4 && b == 4) || (a == 4 && c ==4) || (b ==4 && c ==4)){
     printf("REPROVADO");
 }
 
  
        
     
    


  
  

    return 0;
}

