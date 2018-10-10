#include <stdio.h>
void main () {

float a,b,c;
    printf("->DIVISION<-\n");
    printf ("Introduce un valor para el numero a:");
    scanf ("%f", &a);
    printf ("Introduce un valor para el numero b(Toma en cuenta que este numero debe ser mayor a 0):");
    scanf("%f", &b);
    c=a/b;
    printf("La division de los numeros a y b es: %f\n",c);
    if (c<100){printf("El numero es menor a 100");}
    else {printf("El numero es mayor a 100");}



}
