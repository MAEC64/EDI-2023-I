#include <stdio.h>
#include <string.h>

#define SIZE 11

void burbuja(int arr[SIZE], int index);
void printArray(int arr[SIZE]);

int main (){
    int arr[SIZE] = {10,9,8,7,6,5,4,3,2,1,0};
    burbuja(arr,0);
    printArray(arr);

 return 0;
}

void burbuja(int arr[SIZE], int index){
    int stp = SIZE/2;
    int i;
    //int z = index;
    //printf("z: %d", z);   ;-;

    if(index == stp){
        for(i = 0; i < stp-1; i++){
            if(arr[i] > arr[i+1]){
                break;
            } else {
                //printf("Optimizado");   ;-;
                return 0;
            }
        }
    }
    //printArray(arr);   ;-;
    if(index == SIZE+1){
        return 0;
    }

    for(i = 0; i < SIZE; i++){
        if(arr[i] > arr[i+1]){
            int temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
            //printArray(arr);   ;-;
        }
    }
    return burbuja(arr, index+1);
}

void printArray(int arr[SIZE]){
    for(int i = 0; i < SIZE; i++){
        printf("%d, ", arr[i]);
    }
    printf("\n");
}