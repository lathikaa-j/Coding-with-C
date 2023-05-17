#include<stdio.h>
int biggest(int a,int b,int c);

int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    biggest(a,b,c);
    return 0;
}
int biggest(int a,int b,int c)
{
    int largest;
    largest = a>b?(a>c ? a:c) : (b>c?b:c);
    printf("Largest number is %d",largest);
    return 0;
}
