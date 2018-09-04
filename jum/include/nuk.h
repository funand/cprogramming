#ifndef NUK_H
#define NUK_H
#include <stdio.h>

class nuk
{
    public:
        nuk();
        virtual ~nuk();
    protected:
    private:
};
int main()
{
    int num1;
    int num2, sum;
    printf(” \n\n Enter the first number: \n ");
    scanf("%d", &num1);
    printf(” \n\n Enter the second number: \n ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf(” \n%d + %d = %d \n\n ", num1, num2, sum);
    return 0;
}


#endif // NUK_H
