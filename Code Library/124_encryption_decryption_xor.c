#include<stdio.h>
#include<string.h>

int main(){
    int i,key=10;
    char input[100];

    scanf("%[^\n]s",input);

    for(i=0;i<strlen(input);i++){
        input[i]^=key;
    }

    printf("Encrypted input = %s",input);

    for(i=0;i<strlen(input);i++){
        input[i]^=key;
    }

    printf("\nDecrypted input = %s",input);
       
    return 0;

}