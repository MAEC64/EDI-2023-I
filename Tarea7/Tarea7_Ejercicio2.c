#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 5

void getvalues(int arr[SIZE]);
int sumapospar(int arr[SIZE]);
int sumavalpar(int arr[SIZE]);
void sumacien(int arr[SIZE], int *maxsum, int *tsum);
void prin(int arr[SIZE]);

int main () {

   int arr[SIZE];
   int maxsum = 0;
   int tsum = 0;

   getvalues(arr);
   //prin(arr);
   int sumpos = sumapospar(arr);
   printf("La suma de las posiciones pares es: %d\n", sumpos);
   int sumpar = sumavalpar(arr);
   printf("La suma de los valores pares es: %d\n", sumpar);
   sumacien(arr, &maxsum, &tsum);
   printf("La suma de los valores es %d y fueron sumados %d veces", maxsum, tsum);

   
return(0);
}

void getvalues(int arr[SIZE]){
  int value;
  puts("Ingresa valores entre 1 y 100");
  for (int i = 0; i < SIZE; i++)
  {
    do
    {
        scanf("%d", &value);
        if(value > 100 || value < 1){
            puts("Ingresa UNICAMENTE valores entre 1 y 100");
        }
    } while (value > 100 || value < 1);
    arr[i] = value;
  }
  
}

void prin(int arr[SIZE]){

 for(int i = 0; i < (SIZE); i++)
 {
  printf(" %d", arr[i]);
 }
}

int sumapospar(int arr[SIZE]){
    int val = 0;
    
 for(int i = 0; i < (SIZE); i++)
 {
  if(i % 2 == 0){
    val = val + arr[i];
  }
 }
 return val;
}

int sumavalpar(int arr[SIZE]){
    int val = 0;
    
 for(int i = 0; i < (SIZE); i++)
 {
  if(arr[i] % 2 == 0){
    val = val + arr[i];
  }
 }
 return val;
}

void sumacien(int arr[SIZE], int *maxsum, int *tsum){
   int sum = 0;
   int cont = 0;

   for (int i = 0; i < SIZE; i++)
   {
    if((arr[i] + sum) < 100){
      sum = arr[i] + sum;
      cont = cont + 1;
    }
   }
   *maxsum = sum;
   *tsum = cont;
}