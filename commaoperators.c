#include<stdio.h>
int main()
{
    int a=3,b=5,c=0;
    c=(++a,b+=a);
    printf("The value of c is %d",c);
    return 0;
}
