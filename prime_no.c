#include<stdio.h>
int main()
{
    int i,n,flag=0;
    printf("Enter any number:");
    scanf("%d",&n);
    for (i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
    {
        printf("Composite number");
    }
    else
    {

        printf("Prime number");
    }
    return 0;
}
