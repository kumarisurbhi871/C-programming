#include<stdio.h>
#include<conio.h>
int fib(int num)
{
   if(num==0||num==1)
   {
     return num;
   }
   else{
     return (fib(num-1)+fib(num-2));
   }
}
void main()
{
  int num,res,i;
  printf("enter the numbers:");
  scanf("%d",&num);
  fib(num);
  for(i=0;i<num;i++)
  {
    printf("%d",fib(i));
  }
  getch();
}