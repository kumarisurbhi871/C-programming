 #include<stdio.h>
#include<string.h>
void main(){
    char s[100],temp;
    int i,left,right,len;
    
printf("Enter the string");
    gets(s);

    len=strlen(s);
    left=0;
    right=len-1;
    for(i=left;i<=right;i++){
        temp=s[i];
        s[i]=s[right];
        s[right]=temp;
        right--;
        }
        printf("the riverse of the string=%s",s);
            

    }
