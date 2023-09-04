#include<stdio.h>
void main(){
int m,n,j,num;
printf("Enter the range between n,m");
scanf("%d%d",&n,&m);
for(num=n;num<=m;num++){
    for(j=2;j<num;j++){
    if(num %j==0)
        break;    
}
    if(j==num)
    printf("%d ",num);
}
} 