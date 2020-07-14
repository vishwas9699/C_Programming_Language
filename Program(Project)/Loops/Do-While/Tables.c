#include<stdio.h>
int main(){
    int i=1,number=0;
    printf("Enter a number: ");
    scanf("%d",&number);
    do{
        printf("%d \n",(number*i));
        i++;
    }while(i<=10);
    return 0;
}



//Enter a number: 5
//5
//10
//15
//20
//25
//30
//35
//40
//45
//50