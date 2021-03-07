
#include <iostream>


int main(){
 float a , b, c, f = 0; //f usado como validador para nao forma
  scanf("%f %f %f",&a,&b,&c);
if (c > a && c > b){
    if( (a+b) <= c){
        printf("NAO FORMA");
        f=1;
    }   
    }if( a > b && a > c){
        if( (b+c <= a)){
        printf("NAO FORMA");
        f=1;
    }   
    }if (b > c && b >a ){
        if( (c+a <= b )){
        printf("NAO FORMA");
        f=1;
        }}
        
        else if (a != b && a != c && f != 1){
      printf("ESCALENO");
  }
    else if (a == b && a == c && f!= 1) {
      printf("EQUILÁTERO");
  }else if (f!=1){
      printf("ISOSCELES");
  }
         

    return 0;
}

