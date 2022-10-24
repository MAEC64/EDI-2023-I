#include <stdio.h>
#include <string.h>

#define SIZE 11

void insertion(int arr[SIZE], int index);
void printArray(int arr[SIZE]);

int main (){
 int arr[SIZE] = {10,9,8,7,6,5,4,3,2,1,0};

 insertion(arr,1);
 printArray(arr);

 return 0;
}

void insertion(int arr[SIZE], int index){
    if(index == SIZE+1){
        return 0;
    }
    int actual = index;

    if(arr[index] < arr[index-1]){
            int temp = arr[index];
            arr[index] = arr[index-1];
            arr[index-1] = temp;
            actual = actual - 1;
            if(actual > 0){
                while(arr[actual] < arr[actual-1]){
                    temp = arr[actual];
                    arr[actual] = arr[actual-1];
                    arr[actual-1] = temp;
                    actual = actual - 1;
                    if(actual <= 0){
                        break;
                    }
                }
            }
    }
    return insertion(arr,index+1);
}

void printArray(int arr[SIZE]){
    for(int i = 0; i < SIZE; i++){
        printf("%d, ", arr[i]);
    }
    printf("\n");
}