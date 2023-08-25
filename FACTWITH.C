#include<stdio.h>
int factorial(int n)
{
   int i,fact=1;
   for(i=1;i<=n;i++)
   {
      fact=fact*i;
   }
   return fact;
}
int main(){
  int n,res;
  printf("enter the number");
  scanf("%d",&n);
  res=factorial(n);
  printf("%d",res);

}