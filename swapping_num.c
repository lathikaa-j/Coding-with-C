#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter the first number:");
    scanf("%d",&a);

    printf("Enter the second number:");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

    printf("\nThe first number is %d",a);
    printf("\nThe second number is %d",b);

    return 0;
}
