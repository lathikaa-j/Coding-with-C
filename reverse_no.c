#include<stdio.h>
int main()
{

    int n,sum=0,rem=0;
    printf("Enter a number to reverse:");
    scanf("%d",&n);
    while(n>0)
    {
       rem=n%10;
       sum = (sum*10)+rem;
       n=n/10;
       }
    printf("The reversed number is %d",sum);
    return 0;
}
