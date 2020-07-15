#include <stdio.h>
void main(){
    int number=50;
    int *p;//pointer to int
    p=&number;//stores the address of number variable
    printf("Address of p variable is %u \n",p);
    p=p-1;
    printf("After decrement: Address of p variable is %u \n",p); // P will now point to the immidiate previous location.
}

//Address of p variable is 3214864300
//After decrement: Address of p variable is 3214864296