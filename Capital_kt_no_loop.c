#include<stdio.h>
#include <string.h>
void main()
{
    char s[100];
    int i, n, c = 0,k;
    printf("Enter your string");
    gets(s);
    printf("Enter the kth value of string to change in upper");
    scanf("%d",&k);
    s[k-1]=s[k-1]-32;//convert lower to upper
    puts(s);

}