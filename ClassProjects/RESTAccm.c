#include <stdio.h>
void main () {

int a,b,c;
    printf("->RESTA<-\n");
    printf ("Introduce un valor para el numero a:");
    scanf ("%i", &a);
    printf ("Introduce un valor para el numero b:");
    scanf("%i", &b);
    c=a-b;
    printf("La resta de los numeros a y b es: %i\n",c);
    if (c<100){printf("El numero es menor a 100");}
    else {printf("El numero es mayor a 100");}



}
