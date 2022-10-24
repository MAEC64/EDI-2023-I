#include <stdio.h>
#include <string.h>

#define SIZE 11

int main(){
    int arr[SIZE] = {10,9,8,7,6,5,4,3,2,1,0};

    selectionSort(arr,0);
    printArray(arr);

 return 0;
}

void selectionSort(int arr[SIZE], int index){
    if(index == SIZE+1){
        return 0;
    }
    
    for(int i = index; i < SIZE; i++){
        if(arr[index] > arr[i]){
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
        }
    }
    return selectionSort(arr, index+1);
}

void printArray(int arr[SIZE]){
    for(int i = 0; i < SIZE; i++){
        printf("%d, ", arr[i]);
    }
    printf("\n");
}