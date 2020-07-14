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


//Enter a number: 2
//2
//4
//6
//8
//10
//12
//14
//16
//18
//20

