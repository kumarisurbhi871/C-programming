#include<Stdio.h>
int main()
{
  int i,j,n;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=n;j>=i;j--)
    {
      printf("%d",j);
    }
    printf("\n");
  }
  getch();
  return 0;
}