#include<stdio.h>
int main()

{
    int a,b,large; //declarations

    printf("\nEnter first number:");
    scanf("%d",&a);

    printf("Enter second number:");
    scanf("%d",&b);

    large= (a>b) ? a:b;
    printf("\nThe largest number is %d",large);

    printf("\n");
    return 0;

}
