#include <stdio.h>

#define SIZE 5

typedef struct{

    int queue[SIZE + 1];
    int start;
    int end;
} TQueue;

void initializeQueue(TQueue *Q);
void enqueue(TQueue *Q);
int checkFull(TQueue Q);
int checkEmpty(TQueue Q);
void dequeue(TQueue *Q);
void prin(TQueue Q);

int main (){

    TQueue Q;

    initializeQueue(&Q);

    puts("Entrada");
    for(int i = 0; i < SIZE; i++){
        enqueue(&Q);
    }

    prin(Q);

    puts("\n");

    puts("Salida");
    for(int i = 0; i < SIZE; i++){
        dequeue(&Q);
    }

    prin(Q);

    return 0;
}

void initializeQueue(TQueue *Q){
    Q->start = 0;
    Q->end = 0;

    for(int i = 0; i < SIZE + 1; i++){
        Q->queue[i] = 0;
    }
}

void enqueue(TQueue *Q){

    prin(*Q);
    puts("\n");

    if(checkFull(*Q) == 0){
      Q->queue[Q->end] = 1;
      Q->end++;
    }

}

int checkFull(TQueue Q){

    if((Q.end + 1) % (SIZE + 1) == Q.start){

        return 1;
    }
    return 0;
}

int checkEmpty(TQueue Q){

    if(Q.start == Q.end){
        return 1;
    }
    return 0;
}

void dequeue(TQueue *Q){

    prin(*Q);
    puts("\n");

    if(checkEmpty(*Q) == 0){
        Q->queue[Q->start] = 0;

        for(int i = 0; i < Q->end; i++){
            int temp = Q->queue[i + 1];
            Q->queue[i + 1] = Q->queue[i];
            Q->queue[i] = temp;
        }

        Q->end--;
    }
    
}

void prin(TQueue Q){

    for(int i = 0; i < SIZE; i++){
        printf("[%d] %d\n",i , Q.queue[i]);
    }
}