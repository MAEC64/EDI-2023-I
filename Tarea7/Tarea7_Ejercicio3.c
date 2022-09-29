#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 5

void getclv(int claves[SIZE]);
void getprc(float precios[SIZE]);
void getstock(int stock[SIZE]);
void mostexpensiveclv(int claves[SIZE], float precios[SIZE]);
void less_stockclv(int claves[SIZE], int stock[SIZE]);
void totalrevenue_expected(float precios[SIZE]);
void prin(int claves[SIZE], float precios[SIZE], int stock[SIZE]);

int main() {

char clv[5] = "Clave";
char prc[6] = "Precio";
char stonk[5] = "Stock";
int claves[SIZE];
float precios[SIZE];
int stock[SIZE];

getclv(claves);
getprc(precios);
getstock(stock);
//prin(claves,precios,stock); Para propositos de debugeo
mostexpensiveclv(claves,precios);
less_stockclv(claves,stock);
totalrevenue_expected(precios);

return 0;
}

void getclv(int claves[SIZE]){
  int tempclv;
  for (int i = 0; i < SIZE; i++)
  {
   printf("Ingrese la clave del producto %d\n", i+1);
   scanf("%d", &tempclv);
   claves[i] = tempclv;
   
  }
  puts(" ");
}

void getprc(float precios[SIZE]){
  float tempprc;
  for (int i = 0; i < SIZE; i++)
  {
   printf("Ingrese el precio del producto %d\n", i+1);
   scanf("%f", &tempprc);
   precios[i] = tempprc;
   
  }
  puts(" ");
}

void getstock(int stock[SIZE]){
  int tempstonk;
  for (int i = 0; i < SIZE; i++)
  {
   printf("Ingrese la cantidad en stock del producto %d\n", i+1);
   scanf("%d", &tempstonk);
   stock[i] = tempstonk;
   
  }
  puts(" ");
}

void prin(int claves[SIZE], float precios[SIZE], int stock[SIZE]){

 for(int i = 0; i < (SIZE); i++)
 {
  printf("c %d\n", claves[i]);
  printf("p %.2f\n", precios[i]);
  printf("s %d\n", stock[i]);
 }
}

void mostexpensiveclv(int claves[SIZE], float precios[SIZE]){
    float m = 0;
    int clvmp;
    for (int i = 0; i < SIZE; i++)
    {
        if(precios[i] > m){
            m = precios[i];
            clvmp = i;
        }
    }
    printf("Producto con mayor precio: %d\n", claves[clvmp]);
}

void less_stockclv(int claves[SIZE], int stock[SIZE]){
    int m = 5000;
    int less;
    for (int i = 0; i < SIZE; i++)
    {
        if(stock[i] < m){
            m = stock[i];
            less = i;
        }
    }
    printf("Producto con menor stock: %d\n", claves[less]);
}

void totalrevenue_expected(float precios[SIZE]){
  float revenue = 0.00;

  for (int i = 0; i < SIZE; i++)
  {
    revenue = revenue + precios[i];
  }
  printf("Total de venta esperada: $%.2f\n", revenue);
}