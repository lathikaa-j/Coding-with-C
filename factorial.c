#include<stdio.h>
int main ()
{
    int a,b=1,n;
    printf("Enter the number of terms:");
    scanf("%d",&n);

    for(a=n;a>=1;a--)
    {
        b=b*a;
    }
    printf("factorial = %d",b);
    return 0;
}
