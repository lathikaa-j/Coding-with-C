#include<stdio.h>
int main()
{
    int a=4,b=4,c=9,result,res;
    result = (a==b) && (a>b);
    printf("(a==b) && (a>b) is %d\n",result);

    result = (a==b) && (a<c);
    printf("(a==b) && (a<c) is %d\n",result);

    result = (a>c) && (a!=b);
    printf("(a>c)  && (a!=b) is %d\n",result);

    result = (a==c) && (a==b);
    printf("(a==c) && (a==b) is %d\n",result);

    res = (a==b) || (a>b);
    printf("(a==b) || (a>b) is %d\n",res);

    res = (a==b) || (a<c);
    printf("(a==b) || (a<c) is %d\n",res);

    res = (a>c) || (a!=b);
    printf("(a>c)  || (a!=b) is %d\n",res);

    res = (a==c) || (a==b);
    printf("(a==c) || (a==b) is %d\n",res);

    result = (a!=b);
    printf("(a!=b) is %d\n", result);

    result = (a==b);
    printf("(a==b) is %d\n", result);


    return 0;
}
