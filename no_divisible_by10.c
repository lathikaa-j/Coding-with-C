#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);

    if(a%10==0)
    {
        printf("The number is divisible by 10");
    }

    else
    {
       printf("The number is not divisible by 10");
    }

    return 0;

}
