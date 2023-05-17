#include<stdio.h>
int multiplication(int a)
{
    printf("The multiplication table is \n %d\n %d\n %d\n %d\n %d\n",a*1,a*2,a*3,a*4,a*5);
    return 0;
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    multiplication(n);
    return 0;
}
