#include <stdio.h>
int main () {
int inicial=2 , final=20 , i;

for (i=inicial;i<=final;i=i+2)
{
printf ("%i \n", i++);
}
return 0;
}