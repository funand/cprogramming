#include <stdio.h>
main()
{
int a[10], i, small;
printf("\nEnter elements of an array:\n");
for (i=0; i<=9; i++)
scanf("%d", &a[i]);
small = a[0];
for (i=0; i<=9; i++)
if (a[i] < small)
small = a[i];
printf("\nSmallest number is %d", small);
getch();

}
