#include <stdio.h>
#include <string.h>

main()
{
int a;
for(a=1;a<=20;a++)
{
printf("\nThe loop is at: %d", a);

if(a==12)
break;
}
printf("\nBecause it is at: %d", a);

}
