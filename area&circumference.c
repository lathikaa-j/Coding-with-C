//Finding the area and circumference of circle
#include<stdio.h>
int main()
{
    float r; //radius
    double area,circumference;

    printf("Enter value of radius:");
    scanf("%f",&r);

    area= 3.14*r*r;
    printf("The area of the circle is %lf\n",area);

    circumference= 2*3.14*r;
    printf("\nThe circumference of the circle is %lf",circumference);
    return 0;
}
