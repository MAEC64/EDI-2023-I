#include <stdio.h>

int main(void) {

    int day = 0;
    int hour = 0;
    int minute = 0;
    int seconds = 0;
    
    puts("Dame los dias: ");
    scanf("%d", &day);

    puts("Dame las horas: ");
    scanf("%d", &hour);

    puts("Dame los minutos: ");
    scanf("%d", &minute);

    hour = hour + (day*24);
    minute = minute + (hour*60);
    seconds = seconds + (minute*60);

    printf("La cantidad de segundos es: %d", seconds);


return 0;

}