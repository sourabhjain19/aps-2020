#include<stdio.h>


int sum_array(int arr[],int n){
    if(n<=0)
        return 0;
    return (sum_array(arr,n-1)+arr[n-1]);
}

int main(){
    int arr[]={10,20,30,20};
    int sum=sum_array(arr,4);
    printf("%d",sum);
}