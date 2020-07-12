#include<stdio.h>
int checkPrime(int);

int main(){
    int num;
    printf("Enter the nuber :");
    scanf("%d",&num);
    int result= checkPrime(num);
    if(result==1){
        printf("\n the number entered is prime");
    }
    else{
        printf("\n the number entered is not a prime");
    }

    return 0;
}
int oddeven(int n){
    int count=0;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    return count;
}


