#include<stdio.h>
void main()
{
    int n,reverse=0,rem;
    printf("enter the digit you want to reverse");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }
    printf("%d",reverse);
}