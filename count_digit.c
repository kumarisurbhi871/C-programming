#include<stdio.h>
int main()
{
    int n,c=0;
    printf("Enter the digit");
    scanf("%d",&n);
    while(n>0)
    {
       c++;
       n=n/10;
    }
    printf("%d",c);
}