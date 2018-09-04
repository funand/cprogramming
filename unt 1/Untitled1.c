/* A program to add two numbers */
#include <stdio.h>
int main()
{
    int num1;
    int num2, sum;
    printf("\n\n Enter the first numbeer: \n ");
    scanf("%d", &num1);
    printf("\n\n Enter the second number: \n");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf(" \n%d + %d = %d \n\n ", num1, num2, sum);
    return 0;
}
