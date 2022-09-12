#include <stdio.h>


int main(void) {
    
   float pricekg = 0;
   float totprice = 0;
   float boughtkg = 0;

   puts("Precio por kilo");
   scanf("%f", &pricekg);

   puts("Kilos comprados");
   scanf("%f", &boughtkg);

   totprice = (pricekg*boughtkg);

   if(boughtkg > 2 && boughtkg <= 5){
     totprice = totprice - (totprice*0.1);
   }

   if(boughtkg > 5 && boughtkg <= 10){
      totprice = totprice - (totprice*0.15);
   }

   if(boughtkg > 10){
        totprice = totprice - (totprice*0.2);
   }

    printf("El total es de: %.2f", totprice);

return 0;
}