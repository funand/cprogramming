#include <stdio.h>
#include <string.h>
main()
{
int a;
for(a=0; a<=10; a++){
if (a==6)
break;
printf("Continue loop, the loop is now%d\n", a);
}
printf("Program stops\n");
}
