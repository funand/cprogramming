#include <stdio.h>
#include <stdlib.h>
int main ()
{
char card_name[3];
printf("\nEnter the card names: \n");
scanf("%s", &card_name[0]);

int val = 0;
if (card_name[0] == 'K'){
val = 10;}
else if (card_name[0] =='Q') {
val = 10;}
else if (card_name[0] == 'J') {
val = 10;}
else if (card_name[0] == 'A') {
val = 11;}
else {
val = atoi(card_name);}
printf("The car value is: %d\n", val);
if ((val > 2) && (val <7 ))
    {printf("\n count has gone up\n");}
if (val == 10)
    {printf("count has gone down");}
return 0;
}
