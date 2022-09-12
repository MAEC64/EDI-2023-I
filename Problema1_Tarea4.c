#include <stdio.h>

int main(void) {

float product;
float discount;
float price;

puts("Precio del producto: ");
scanf("%f", &product);

puts("Descuento: ");
scanf("%f", &discount);

discount = (discount/100);
price = (product-(product*discount));

printf("Precio total: %.2f", price);

return 0;
}
