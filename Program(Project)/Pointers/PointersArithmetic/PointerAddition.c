#include<stdio.h>
int main(){
    int number=50;
    int *p;//pointer to int      
    p=&number;//stores the address of number variable        
    printf("Address of p variable is %u \n",p);
    p=p+3;   //adding 3 to pointer variable    
    printf("After adding 3: Address of p variable is %u \n",p);
    return 0;
}

//Address of p variable is 3214864300
//After adding 3: Address of p variable is 3214864312