#include <stdio.h>
int sumOdd();
int sumEven();
main ()
{
int totalSum;
totalSum = sumOdd() + sumEven();
printf("%d", totalSum);
}
int sumOdd( )
{
int i;
int sum_Odd = 0;
for(i=1; i<100; i+2)
sum_Odd = sum_Odd + i;
return (sum_Odd);
}
int sumEven( )
{
int i;
int sum_Even = 0;
for(i=0; i<100; i+2)
sum_Even = sum_Even + i;
return(sum_Even);
