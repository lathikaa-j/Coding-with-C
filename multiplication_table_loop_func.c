#include<stdio.h>
int multiplication(int n)
{
    int i;
    for(i=1;i<=10;i++){
    printf("%d*%d=%d\n",n,i,n*i);
    }
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
