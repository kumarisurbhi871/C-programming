#include<stdio.h>
#include<conio.h>
int fact(int num);
void main()
{
  int num,res;
  printf("enter the numbers:");
  scanf("%d",&num);
  res= fact(num);
  printf("%d",res);
  getch();
}
int fact(int num)
{
   if(num==0||num==1)
   {
     return 1;
   }
   else{
     return (num*fact(num-1));
   }
}