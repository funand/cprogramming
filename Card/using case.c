#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main ()
{
char card_name[3];
printf("\nEnter the card name: \n");
scanf("%2s", &card_name[0]);

int count = 0;
while(card_name[0] != 'X'){
int val = 0;
switch(card_name[0]) {
case 'k':
case 'Q':
case 'J':
val = 10;
printf("\nThe value is: 10");
break;
case 'A':
val = 11;
printf("\nThe value is: 11");
break;
case 'X':
    continue;
default:
val = atoi(card_name);
if ((val < 1) || (val > 0)){
    printf("\nI don't understand that value!\n");
    continue;}
}
if ((val > 2) && (val <7 ))
    {count++;}
else if (val == 10)
    {count--;}
    printf("\nThis is the current count: %d", count);}
return 0;
}

