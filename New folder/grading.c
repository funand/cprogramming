#include <stdio.h>
main()
{
int score;
printf("Enter your score");
scanf("%d", &score);
if  (score > 70){
printf("Your grade is A");
}
else if (score > 60){
printf("Your grade is B");
}
else if (score > 50){
printf("Your grade is C");
}
else if (score > 45){
printf("Your grade is D");
}
else if (score > 35){
printf("Your grade is E");
}
else{
printf("Your grade is F");
}
return 0;

}
