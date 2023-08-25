#include<stdio.h>
int main()
{
  int x;
  printf("enter a number:");
  scanf("%d",&x);
  if(x%400==0 || (x%4==0 && x%100==0))
  {
     printf("this is leap year");
  }
  else{
    printf("this is not year");
  }
}