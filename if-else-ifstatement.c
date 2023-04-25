#include<stdio.h>
int main()
{
    int a;
    printf("Enter the mark obtained by the student:");
    scanf("%d",&a);

    if(a>=90){
        printf("The grade is O");
        }
    else if(a>=80){
        printf("The grade is A+");
        }
    else if(a>=70){
        printf("The grade is A");
        }
    else if(a>=60){
        printf("The grade is B");
        }
    else {
        printf("The student have Failed");
    }

        return 0;
}
