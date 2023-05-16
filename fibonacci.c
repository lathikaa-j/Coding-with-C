#include<stdio.h>
int main(){
    int i,n,a,b,c;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("The fibonacci series for %d terms is \n",n);
    if(n==1){
        printf("0");
    }
    else if(n==2){
        printf("0 1");
    }
    else{
    printf("0 1 ");
    a=0; b=1;
    for(i=2;i<n;i++){

        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    }
    return 0;




}

