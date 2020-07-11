#include<stdio.h>
int main(){
    int number=0;
    printf("Enter a number:");
    scanf("%d",&number);
    if(number%2==0){
        printf("%d is even number",number);
    }
    return 0;
}

//Enter a number:4
//4 is even number
//
//enter a number:5