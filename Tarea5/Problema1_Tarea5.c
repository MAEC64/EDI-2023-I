#include <stdio.h>


int main(void) {
    
    int hour=0;
    int minute=0;

    puts("Que hora es?");
    puts("Hora");
    scanf("%d", &hour);
    puts("Minuto");
    scanf("%d", &minute);

    if(hour < 24 || minute <= 59){

     if(hour >= 0 && hour < 12){
        puts("Buenos dias");

      }else if(hour >= 12 && hour < 18){
        puts("Buenas tardes");

       } else if((hour >= 18) && (hour <=23 && minute <= 59)){
        puts("Buenas noches");
     }
    } /*else{ Esto no me funciona por alguna razon, alguna idea maestra?
        puts("No");
    }*/
    
    if(hour > 24 || minute > 59){
        puts("Esa hora no existe");
    }


    return 0;
}