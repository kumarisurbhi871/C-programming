#include<stdio.h>
#include<conio.h>
int main()
{
  int n,i,j;
  char ch='A';
  printf("enter the  size (n):");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      if(i==1||i==n || j==1||j==n)
      {
	  printf("*");
      }
      else{
	    printf("%c",ch++);
      }
    }
    printf("\n");
  }
  getch();
  return 0;
}