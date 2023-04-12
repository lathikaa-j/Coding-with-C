//relational and equality operators
#include <stdio.h>
int main()
{
  int x,y;
  printf("Enter first number:");
  scanf("%d",&x);

  printf("\n Enter second number:");
  scanf("%d",&y);

  printf("\n %d<%d is %d",x,y,x<y);

  printf("\n %d>%d is %d",x,y,x>y);

  printf("\n %d==%d is %d",x,y,x==y);

  printf("\n %d!=%d is %d",x,y,x!=y);

  printf("\n %d<=%d is %d",x,y,x<=y);

  printf("\n %d>=%d is %d\n",x,y,x>=y);
  return 0;

}
