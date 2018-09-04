#include <stdio.h>
int main(){
char employee_status;
printf("Enter the status value\n");
scanf("%c", &employee_status);

if (employee_status == 'p'|| employee_status =='p')
{
printf("Employee is a part time staff \n");
}

else if (employee_status == 'r' || employee_status == 'F')
{
printf("Employee is a retired Staff");
}
else{
printf("You entered an Unknown Status");
}
return 0;
}
