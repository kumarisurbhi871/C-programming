#include<stdio.h>
void main(){
    char str[100];
    int i,j,k;
    printf("Enter any string");
    gets(str);
    for(i=0;str[i]!='\0';i++) //shows string termination
{
k=1; // any charecter in a string is appear atleast one time
for(j=i+1;str[j]!='\0';j++)
{
    if(str[i]==str[j])
    {
        k++;
    }
}
printf("\n %c appeared = %d times",str[i],k);
}
}