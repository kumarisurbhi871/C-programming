#include<stdio.h>
#include<conio.h>
int main()
{ int i,j,n;
  printf("enter the n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  for(j=0;j<n;j++)
  {
    if(i%2==0)
    {
       printf("%c",97+i);
    }
    else
    {
      printf("%c",65+i);
    }

  }
  printf("\n");
  }
  getch();
  return 0;
}