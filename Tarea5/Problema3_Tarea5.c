#include <stdio.h>


int main(void) {
    
   int lado1 = 0;
   int lado2 = 0;
   int lado3 = 0;
  
   puts("Escribe los lados");
   scanf("%d", &lado1);
   scanf("%d", &lado2);
   scanf("%d", &lado3);

   if(lado1==lado2 && lado2==lado3 && lado1==lado3){
      puts("Es un triangulo equilatero");
   }

   if((lado1==lado2 || lado2==lado3 || lado1==lado3) && (lado1!=lado2 || lado2!=lado3 || lado1!=lado3)){
      puts("Es un triangulo isoceles");
   }

   if(lado1!=lado2 && lado2!=lado3 && lado1!=lado3){
      puts("Es un triangulo escaleno");
   }

return 0;
}