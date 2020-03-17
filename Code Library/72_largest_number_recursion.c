#include<stdio.h>

int largest_num(int arr[100],int lower,int upper){
    int max;
    if (lower==upper)
        return arr[lower];
    else{
        max=largest_num(arr,lower+1,upper);

        if (arr[lower]>max)
            return arr[lower];
        else
            return max;
    }
}

int main(){
    int arr[]={16,4,5,25,6,4,12};
    printf("%d",largest_num(arr,0,6));
}