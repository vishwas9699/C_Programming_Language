#include<stdio.h>
int main(){
    int i=1,number=0;
    printf("Enter a number: ");
    scanf("%d",&number);
    for(i=1;i<=10;i++){
        printf("%d \n",(number*i));
    }
    return 0;
}

