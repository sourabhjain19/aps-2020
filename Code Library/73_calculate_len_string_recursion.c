#include<stdio.h>

int count=0;
int cal_len(char *str){
    if(*str){
        count++;
        cal_len(str+1);
    }
    else 
        return count;
}

int main(){
    char str[]="Hello World";
    printf("%d",cal_len(str));
}