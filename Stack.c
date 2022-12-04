#include <stdio.h>

#define STACK_CAPACITY 5

typedef struct{
    int data[STACK_CAPACITY];
    int top;
} TStack;

void initialize(TStack *s);
void insert(TStack *s);
void out(TStack *s);
void prin(TStack s);
int checkFull(TStack s);
int checkEmpty(TStack s);

int main (){

    TStack s;
    int i;

    initialize(&s);

    prin(s);

    puts("Inserta");
    for(i = 0; i < STACK_CAPACITY; i++){
        insert(&s);     
    }
    prin(s);

    puts("\n");

    puts("Elimina");
    for(i = 0; i < STACK_CAPACITY; i++){
        out(&s);
    }
    prin(s);

    return 0;
}

void initialize(TStack *s){
    s->top = 0;

    for(int i = 0; i < STACK_CAPACITY; i++){
        s->data[i] = 0;
    }
}

void insert(TStack *s){

    if(checkFull(*s) == 0 ){
        s->data[s->top] = 1;
        s->top++;
    }
}

void out(TStack *s){

    if(checkEmpty(*s) == 0){
        s->data[s->top] = 0; //Llevo horas tratando de ver por que convierte top a 0 en vez de usarlo como un indice igual que en la funcion de insertar en la funcion de insertar
        s->top--;
    }
}

void prin(TStack s){

    for(int i = 0; i < STACK_CAPACITY; i++){
        printf("[%d] %d\n",i , s.data[i]);
    }
}

int checkFull(TStack s){

    if((s.top + 1) % (STACK_CAPACITY + 1) == 0){

        return 1;
    }
    return 0;
}

int checkEmpty(TStack s){

    if(s.top == 0){
        return 1;
    }
    return 0;
}