//Arithmetic operators
#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter first number:");
    scanf("%d",&a);

    printf("\n Enter second number:");
    scanf("%d",&b);

    printf("\n The sum of the numbers is %d",a+b);
    printf("\n");

    printf("\n The difference between two numbers is %d",a-b);
    printf("\n");

    printf("\n The product of two numbers is %d",a*b);
    printf("\n");

    printf("\n Division of two numbers is %d",a/b);
    printf("\n");

    printf("\n The remainder of the two numbers is %d",a%b);
    printf("\n");
    return 0;
}
