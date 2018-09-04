#include <stdio.h>
main ()
{
int i;
float sum = 0.00;
for (i=0; i<=10; i++)
{
sum+= 1/i * i;
printf("The sum of %d is %f",i,sum);
}
return 0;
}
