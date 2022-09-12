#include <stdio.h>


int main(void) {

    int day = 0;
    int hour = 0;
    int minute = 0;
    int seconds = 0;

    puts("Dame los segundos: ");
    scanf("%d", &seconds);

    day = (seconds/86400);
    seconds = (seconds % 86400);
    hour = (seconds / 3600);
    seconds = (seconds % 3600);
    minute = (seconds / 60);
    seconds = (seconds % 60);

    printf("La cantidad de dias es: %d\n", day);
    printf("La cantidad de horas es: %d\n", hour);
    printf("La cantidad de minutos es: %d\n", minute);
    printf("La cantidad de segundos es: %d\n", seconds);

return 0;
}
