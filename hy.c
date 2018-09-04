#include <stdio.h>
#include <string.h>
main()
{
int quiz1, quiz2, quiz3, total_quiz;
float average = 0.00;
average = (float) quiz1 + (float) quiz2 + (float) quiz3 / 3;
printf("\nPlease enter quiz1 grade: \n");
scanf("%d", &quiz1);
printf("Please enter quiz2 grade: \n");
scanf("%d", &quiz2);
printf("Please enter quiz3 grade: \n\n");
scanf("%d", &quiz3);
printf("You have entered %d, %d and %d\n", quiz1, quiz2, quiz3);
printf("The average is: %f", average);
return 0;
}
