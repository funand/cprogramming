#include <stdio.h>
int main(){
char employee_status;
printf("Enter the status value\n");
scanf("%c", &employee_status);


switch (employee_status){
case 'p':
printf("Part time employee\n");
break;

case 'f':
printf("Full time employee\n");
break;

case 'r':
printf("Retired employee\n");
break;

default :
(void) printf("Unknown option\n");
}
return 0;
}
