#include <stdio.h>
#include <conio.h>
main()
{
int quiz1, quiz2, quiz3;
printf("\nEnter first score: ");
scanf("%d",&quiz1);
printf("\nEnter second score: ");
scanf("%d",&quiz2);
printf("\nEnter third score: ");
scanf("%d",&quiz3);
printf("\nYou have entered %d, %d and %d\n", quiz1, quiz2, quiz3);
float average;
average = (quiz1+quiz2+quiz3)/3;
printf("\nThe average is: %f", average);
getch();

return 0;
}
