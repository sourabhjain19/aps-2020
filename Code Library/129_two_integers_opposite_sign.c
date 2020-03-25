#include<stdio.h>

int main(){
    int x=-10 , y=-40;

    if ((x^y)<0){
        printf("Different Sign");
    }
    else{
        printf("Same Sign");
    }
    return 0;
}