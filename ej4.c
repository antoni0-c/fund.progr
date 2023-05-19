#include<stdio.h>

int main(){
    int hora;
    int min;
    int seg;
    int acum;
    printf("ingrese la hora, minutos y segundos(en formato 24h)\n");
    scanf("%i%i%i",&hora,&min,&seg);
    hora=hora*360;
    min=min*60;
    acum=hora+min+seg;
    printf("segundos desde las 0:0:0 horas:\n%i",acum);
    return 0;
}