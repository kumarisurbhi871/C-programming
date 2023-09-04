#include<stdio.h>
#include<string.h>
int main(){
    int i,j,n,c=0;
    int flag=0;
    char s[100],temp;
    n=strlen(s);
    printf("Entet the string");
    gets(s);
    for(i=0,j=n-1;i<j;i++,j--)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        if(s[i]!=s[j])
        flag=1;
        
    }
    
    if(flag==0){
        printf("   palindrome");
    }
    else{
        printf("  not paindrome");
    }
}