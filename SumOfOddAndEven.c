#include<stdio.h>
void main(){
    int arr[100],i,sumE=0,sumO=0,n;
    printf("Enter the number of element in an array");
    scanf("%d",&n);
    printf("enter the element in an array");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            sumE= sumE +arr[i];
        }
        else{
            sumO = sumO + arr[i];
        }
    }
    printf("sum of even=%d",sumE);
    printf("sum of odd=%d",sumO);
    }

