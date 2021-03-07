
#include <iostream>


int main(){
  float valor , porc, desc, final;
  final = valor;
  scanf("%f", &valor);
  if (valor > 100 && valor < 201) {
      porc = 0.05;
            desc = valor * porc;
                final = valor - desc;
  }else if (valor > 200){
      porc = 0.10;
            desc = valor * porc;
                final = valor - desc;
  }
  
  printf("R$ %.2f", final);
  

    return 0;
}
