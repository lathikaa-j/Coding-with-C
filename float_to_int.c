#include<stdio.h>
int main()
{
    int i;
    float f;

    printf("Enter a number of float data type:");
    scanf("%f",&f);

    i= (int)f;

    printf("The integer variant of the number is %d",i);

    return 0;
}
