#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter the temperature in fahrenheit:");
    scanf("%f",&f);

    c = (0.56)*(f - 32);

    printf("The temperature in Celsius is %f",c);
    return 0;
}
