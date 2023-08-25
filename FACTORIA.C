#include<stdio.h>
void factorial(int n)
{
   int i,fact=1;
   for(i=1;i<=n;i++)
   {
      fact=fact*i;
   }
   printf("%d",fact);
   getch();
   return 0;
}
int main(){
  int n;
  printf("enter the number");
  scanf("%d",&n);
  factorial(n);
}