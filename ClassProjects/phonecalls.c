#include <stdio.h>
void main () {
	float t,m;
	printf("**************************************************\n");
	printf("		LLAMADAS LOCALES 180s O MENOS  $1.5MXN.\n	 	SEGUNDO ADICIONAL			   $0.3MXN.\n");
	printf("**************************************************\n");
	printf("	CONVERTIDOR MINUTOS A SEGUNDOS:\n");
	printf("Minutos:");
	scanf("%f",m);
//f1 algoritmo para convertir minutos a segundos
	float f1,f2;
	f1=m*60;
	printf("Tiempo en segundos:%f\n",f1);
	printf("**************************************************\n");
	printf("Segundos usados:");
	scanf("%f",&t);
	f2=(t-180)*0.3+1.5;
//f2 algoritmo para calcular los segundos adicionales y ademas calcular su coste total
	{
		if (t<=180){
		printf ("El coste es $1.5 MXN\n");}
	{
		if (t>180){
		printf ("El coste es:$%f\n",f2);}
	printf("**************************************************\n");

return 0
}