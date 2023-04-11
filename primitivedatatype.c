#include<stdio.h>
int main()
{
    int a;
    char t;
    float f;
    double x;
    short h;
    long u;
    long double b;

    printf("Enter a character:");
    scanf("%c",&t);
    printf("The character is %c",t);
    printf("\n");

    printf("Enter a number of int data type: ");
    scanf("%d",&a);
    printf("The number is %d",a);
    printf("\n");

    printf("\nEnter a number of float data type: ");
    scanf("%f",&f);
    printf("The number is %f",f);
    printf("\n");

    printf("\nEnter a number of double data type: ");
    scanf("%lf",&x);
    printf("The number is %lf",x);
    printf("\n");

    printf("\nEnter a number of short int data type: ");
    scanf("%d",&h);
    printf("The number is %d",h);
    printf("\n");

    printf("\nEnter a number of long int data type: ");
    scanf("%d",&u);
    printf("The number is %d",u);
    printf("\n");

    printf("\nEnter a number of long double data type: ");
    scanf("%Lf",&b);
    printf("The number is %Lf",b);
    printf("\n");

    return 0;
}




