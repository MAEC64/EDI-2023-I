#include <stdio.h>
#include <string.h>

#define SIZE 10
// La carita triste es para lineas de codigo que se usaron para debuguear o ya no sirven debido a un cambio ;-;

int busquedaRecursiva(int arr[SIZE], int num, int inicio, int final, int index);
int busquedaCiclica(int arr[SIZE], int num, int inicio, int final);

int main () {

    int num = 149;
    int arr[SIZE] = {4,20,38,45,67,88,110,137,149,182};
    int final = SIZE;
/*
    puts("Numero a buscar");  pal deleite del usuario
    scanf("%d", &num);
*/
    int posR = busquedaRecursiva(arr, num, 0, final, 0);
        if(posR >= 0){
        printf("R: %d esta en la posicion %d\n",num, posR + 1); //El +1 porque es el elemento 5 del arreglo mas que ser la posicion
    } else {
        puts("R: No se encontro el valor solicitado\n");
    }

    int posC = busquedaCiclica(arr, num, 0, final);
        if(posC >= 0){
        printf("C: %d esta en la posicion %d\n",num, posC + 1); //El +1 porque es el elemento 5 del arreglo mas que ser la posicion
    } else {
        puts("C: No se encontro el valor solicitado\n");
    }

return 0;
}

int busquedaRecursiva(int arr[SIZE], int num, int inicio, int final, int index){
    int i = (inicio + (final-inicio)/2);
    
        if(arr[i] == num){
            return i;
        }
        if(arr[i] >= num){
            final = i - 1;
        } else {
            inicio = i + 1;
        }

    if(inicio == final){
        return -1;
    }

    return busquedaRecursiva(arr, num, inicio, final, index + 1);
}

int busquedaCiclica(int arr[SIZE], int num, int inicio, int final){
    int i = (inicio + (final-inicio)/2);

    if(arr[i] >= num){
        final = i;
    } else {
        inicio = i;
    }

/*  ;-;
    printf("ind= %d\n", index);
    puts("");
    printf("i= %d\n", i);
    puts("");
    printf("f= %d\n", final);
*/

    for(int j = inicio; j < final; j++){
        if(num == arr[j]){
            return j;
        }
    }

    return -1;

/*  ;-;
    if(index == SIZE){
        return -1;
    }
*/
}
//Iniciado el 15 de Octubre de 2022
//Acabado el 16 de Octubre de 2022