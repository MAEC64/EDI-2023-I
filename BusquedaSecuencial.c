#include <stdio.h>
#include <string.h>

#define SIZE 10

int main () {

    //int n = SIZE;
    int num;
    int arr[SIZE] = {2,9,12,20,32,92,13,7,56,64};

    puts("Numero a buscar");
    scanf("%d", &num);

    int posC = busquedaCiclica(arr, num, 0);
        if(posC >= 0){
        printf("Mediante ciclos, %d se encontro en la posicion %d\n",num, posC + 1); //El +1 porque es el elemento 5 del arreglo mas que ser la posicion
    } else {
        puts("No se encontro el valor solicitado\n");
    }

    int posR = busquedaRecursiva(arr, num, 0);

    if(posR >= 0){
        printf("Mediante recursividad, %d se encontro en la posicion %d\n",num, posR + 1); //El +1 porque es el elemento 5 del arreglo mas que ser la posicion
    } else {
        puts("No se encontro el valor solicitado\n");
    }

return(0);
}

int busquedaRecursiva(int arr[SIZE], int num, int index){

    if(index == SIZE - 1){
        if(num == arr[index]){
        return index;
     } else {
        return -1;
     }
    }
    
    if(num == arr[index]){
        return index;
    }

    return busquedaRecursiva(arr, num, index + 1);
}

int busquedaCiclica(int arr[SIZE], int num, int select){

    if(select == 0){
        for(int i = 0; i < SIZE; i++){
            if(num == arr[i]){
            return i;
          }
        }
    } else {
        return -1;
    }

    return busquedaCiclica(arr, num, select + 1);
}