#include<stdio.h>
int main()
{

    int a,b,c,d;
    float total;

    printf("\nEnter the number of Rs 10 coins:");
    scanf("%d",&a);

    printf("\nEnter the number of Rs 5 coins:");
    scanf("%d",&b);

    printf("\nEnter the number of Rs 2 coins:");
    scanf("%d",&c);

    printf("\nEnter the number of Re 1 coins:");
    scanf("%d",&d);

    total= a*10+b*5+c*2+d*1;

    printf("\nThe total amount is Rs %f",total);

    return 0;
}
