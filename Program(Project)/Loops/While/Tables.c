#include<stdio.h>
int main(){
    int i=1,number=0,b=9;
    printf("Enter a number: ");
    scanf("%d",&number);
    while(i<=10){
        printf("%d \n",(number*i));
        i++;
    }
    return 0;
}

//Enter a number: 50
//50
//100
//150
//200
//250
//300
//350
//400
//450
//500
