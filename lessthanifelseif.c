#include<stdio.h>
int main()
{
    int i;
    printf("Enter a number:");
    scanf("%d",&i);

    if(i<10)
        {
        printf("The number is less than 10");
        }

    else if(i<20)
        {
        printf("The number is less than 20");
        }

    else if(i<30)
        {
        printf("The number is less than 30");
        }

    else if(i<40)
        {
        printf("The number is less than 40");
        }

    else if(i<50)
        {
        printf("The number is less than 50");
        }

    else
    {
        printf("The number is more than 50");
    }

    return 0;

}
