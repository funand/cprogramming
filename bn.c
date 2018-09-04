#include<stdio.h>
#include<string.h>
int main()
{
int a;
for (a=1; a<267789514; a++)
{
if(a==8)
continue;
printf("The loop continues,a is now %d\n", a);
}
printf("PROGRAM STOP\n");
}
