#include<stdio.h>
int main()
{
    int a,digit;
    printf("Enter any number:");
    scanf("%d",&a);

    digit= a%10;
    printf("\nThe digit at ones place of the number is %d",digit);
    return 0;
}
