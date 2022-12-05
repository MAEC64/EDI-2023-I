#include <stdio.h>

#define SET_CAPACITY 10

typedef struct {
    int set1[SET_CAPACITY];
    int size1;
} TSet1; //Conjunto 1

typedef struct {
    int set2[SET_CAPACITY];
    int size2;
} TSet2; //Conjunto 2 

typedef struct {
    int test[SET_CAPACITY * 2];
    int sizet;
} TTest; //Para probar las funciones de union y eso

void initialize1(TSet1 *s1);
void fill1(TSet1 *s1);
void prin1(TSet1 s1);
void insert1(TSet1 *s1, int x);
int seqFetch1(TSet1 s1, int x, int *ind);
void deletSpec1(TSet1 *s1, int x);
void deletBegin1(TSet1 *s1, int *z);
void deletFinal1(TSet1 *s1, int *z);

void initialize2(TSet2 *s2);
void fill2(TSet2 *s2);
void prin2(TSet2 s2);
void insert2(TSet2 *s2, int x);
int seqFetch2(TSet2 s2, int x, int *ind);
void deletSpec2(TSet2 *s2, int x);
void deletBegin2(TSet2 *s2, int *z);
void deletFinal2(TSet2 *s2, int *z);

int main (){

    TSet1 s1;
    TSet2 s2;
    TTest t; //Para la union y esas cosas
    int x = 13; //Numero a insertar
    int y = 0; //Almacena el indice donde se encuentra el valor de la busqueda secuencial
    int z = 0; //Almacena el valor eliminado en las funciones de borrar valores al inicio y al final

    initialize1(&s1);

    for(int i = 0; i < (SET_CAPACITY/2); i++){
        fill1(&s1);
    }

    prin1(s1);
    puts("\n");

    initialize2(&s2);

    for(int i = 0; i < (SET_CAPACITY/2); i++){
        fill2(&s2);
    }

    prin2(s2);
    puts("\n");
/*
    unite(s1, s2, &t);

    for(int i = 0; i < t.sizet; i++){
        printf("[%d] %d\n",i , t.test[i]);
    }
*/

    insert1(&s1, x);

    prin1(s1);
    puts("\n");

    deletSpec1(&s1, x);

    prin1(s1);
    puts("\n");

    deletBegin1(&s1, &z);
    printf("Valor eliminado %d", z);
    puts("\n");

    prin1(s1);
    puts("\n");

    deletFinal1(&s1, &z);
    printf("Valor eliminado %d", z);
    puts("\n");

    prin1(s1);
    puts("\n");

    return 0;
}
//------------------------- Set 1 -----------------------------------
void initialize1(TSet1 *s1){
    s1->size1 = 0;

    for(int i = 0; i < SET_CAPACITY; i++){
        s1->set1[i] = 0;
    }
}

void fill1(TSet1 *s1){

    s1->set1[s1->size1] = 10 + s1->size1;
    s1->size1++;

}

void prin1(TSet1 s1){

    for(int i = 0; i < SET_CAPACITY; i++){
        printf("[%d] %d\n",i , s1.set1[i]);
    }

    printf("%d", s1.size1);
}

void insert1(TSet1 *s1, int x){
    int ind;
    if(seqFetch1(*s1, x, &ind) == 0){ //Busca el valor en el conjunto
        s1->set1[s1->size1] = x;
        s1->size1++;
    } else {
        printf("%d ya existe en el conjunto\n", x); //Avisa que ya existe el valor
    }
}

int seqFetch1(TSet1 s1, int x, int *ind){

    int i;
    for(i = 0; i < s1.size1; i++){
        if(s1.set1[i] == x){
            *ind = i;
            return 1;
        }
    }
    return 0;
}

void deletSpec1(TSet1 *s1, int x){
    int ind;
    if(seqFetch1(*s1, x, &ind) == 1){ 
        for(int i = ind; i < s1->size1; i++){
            s1->set1[i] = s1->set1[i + 1];
        }
        s1->size1--;
    } 
}

void deletBegin1(TSet1 *s1, int *z){
    *z = s1->set1[0];
    for(int i = 0; i < s1->size1; i++){
        s1->set1[i] = s1->set1[i + 1];
    }
    s1->size1--;
}

void deletFinal1(TSet1 *s1, int *z){
    s1->size1--;
    *z = s1->set1[s1->size1];
    s1->set1[s1->size1] = 0;
}


//------------------------- Set 2 -----------------------------------

void initialize2(TSet2 *s2){
    s2->size2 = 0;

    for(int i = 0; i < SET_CAPACITY; i++){
        s2->set2[i] = 0;
    }
}

void fill2(TSet2 *s2){

    s2->set2[s2->size2] = 12 + s2->size2;
    s2->size2++;

}

void prin2(TSet2 s2){

    for(int i = 0; i < SET_CAPACITY; i++){
        printf("[%d] %d\n",i , s2.set2[i]);
    }

    printf("%d", s2.size2);
}

void insert2(TSet2 *s2, int x){
    int ind;
    if(seqFetch2(*s2, x, &ind) == 0){ //Busca el valor en el conjunto
        s2->set2[s2->size2] = x;
        s2->size2++;
    } else {
        printf("%d ya existe en el conjunto\n", x); //Avisa que ya existe el valor
    }
}

int seqFetch2(TSet2 s2, int x, int *ind){
    int i;
    for(i = 0; i < s2.size2; i++){
        if(s2.set2[i] == x){
            *ind = i;
            return 1;
        }
    }
    return 0;
}

void deletSpec2(TSet2 *s2, int x){
    int ind;
    if(seqFetch2(*s2, x, &ind) == 1){ 
        for(int i = ind; i < s2->size2; i++){
            s2->set2[i] = s2->set2[i + 1];
        }
        s2->size2--;
    } 
}

void deletBegin2(TSet2 *s2, int *z){
    *z = s2->set2[0];
    for(int i = 0; i < s2->size2; i++){
        s2->set2[i] = s2->set2[i + 1];
    }
    s2->size2--;
}

void deletFinal2(TSet2 *s2, int *z){
    s2->size2--;
    *z = s2->set2[s2->size2];
    s2->set2[s2->size2] = 0;
}


//-------------------------------------------------------------------

/*
void unite(TSet1 s1, TSet2 s2, TTest *t){
    for(int i = 0; i < s1.size1; i++ ){
        t->test[i] = s1.set1[i];
    }
    t->sizet = s1.size1;
   
}

int alreadyIn(TTest t, TSet2 s2){
     for(int j = 0; j < s2.size2; j++ ){
            if(s1.set1[i] != s2.set2[j]){

            }
    }
}
*/