#include<stdio.h>
int main()
{
    int a=10;
    
    a+= 2;
    printf("The value of a is %d\n",a);

    a-= 2;
    printf("The value of a is %d\n",a);

    a*= 2;
    printf("The value of a is %d\n",a);

    a/= 2;
    printf("The value of a is %d\n",a);

    a%= 2;
    printf("The value of a is %d\n",a);

    a&= 2;
    printf("The value of a is %d\n",a);

    a^= 2;
    printf("The value of a is %d\n",a);

    a>>= 2;
    printf("The value of a is %d\n",a);

    a<<= 2;
    printf("The value of a is %d\n",a);


    return 0;


}
