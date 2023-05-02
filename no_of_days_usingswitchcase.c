#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number of month:");
    scanf("%d",&a);

    switch(a)
    {
        case 1: printf("The month January has 31 days");
        break;

        case 2: printf("The month February has 28/29 days");
        break;

        case 3: printf("The month March has 31 days");
        break;

        case 4: printf("The month April has 30 days");
        break;

        case 5: printf("The month May has 31 days");
        break;

        case 6: printf("The month June has 30 days");
        break;

        case 7: printf("The month July has 31 days");
        break;

        case 8: printf("The month August has 31 days");
        break;

        case 9: printf("The month September has 30 days");
        break;

        case 10: printf("The month October has 31 days");
        break;

        case 11: printf("The month November has 30 days");
        break;

        case 12: printf("The month December has 31 days");
        break;

        default: printf("The number does not have month");
    }

    return 0;
}
