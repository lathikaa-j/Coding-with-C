#include<stdio.h>
int main()
{
    int a,b,n,sum=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        for(b=0;b<=a;b++)
        {
            printf("%d ",sum);
            sum++;
        }
        printf("\n");
    }
    return 0;
}
