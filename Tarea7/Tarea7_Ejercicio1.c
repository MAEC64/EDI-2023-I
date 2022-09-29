#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 100

void getchain(char chain[SIZE]);
void serchchart(char serch[0]);
int findchart(char serch[0], char chain[SIZE]);

int main() {

char chain[SIZE];
char serch[1];

getchain(chain);
serchchart(serch);

//printf("%s / %s", chain, serch); para ver el contenido de las cadenas y buscar el error el cual aun no encuentro

int found = findchart(serch, chain);

printf("La letra %s aparecio %d veces", serch, found);

return 0;
}

void getchain(char chain[SIZE]){
puts("Ingrese cadena");
scanf("%s", chain);

}

void serchchart(char serch[0]){
 puts("Ingrese caracter");
 scanf("%s", serch);
}

int findchart(char serch[0], char chain[SIZE]){
 int count = 0;
 
 for (int i = 0; i < SIZE; i++)
 {
  if(strcmp(chain[i],serch[0]) == 0){
    count = count + 1;
  }
 }
 return count;

}