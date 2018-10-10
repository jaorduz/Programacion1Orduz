#include <stdio.h>
void main(){

float s,a,x,c,y;
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("Las llamadas locales menores a 180 segundos tienen un costo de $1.5 MXN.\n");
    printf("A partir de los 181 segundos, el segundo adicional cuesta $0.3 MXN\n");
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("Introduce los segundos ocupados:");
//s es la variable para los segundos, ¿cómo convierto de min a seg?
    scanf("%f",&s);
    if(s<=180){printf("El coste es de $1.5 MXN");}
//ahora debo declarar una variable que reconozca cuantos segundos adicionales fueron, para multiplicarlo posteriormente por a
    c=s-180;
//c variable para saber cuántos minutos adicionales fueron
//a variable para lo que cuesta cada segundo adicional APARTIR DE LOS 181 seg
    a== 0.3;
    x=c*a;
//x variable para saber el coste total de los segundos adicionales
    y=s+x;
//y variable para el coste de los 180s + los segundos adicionales
    if(x>180){printf("El coste es:", &y);}
//FALTA TERMINAR Y CORREGIR


}
