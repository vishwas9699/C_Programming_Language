#include<stdio.h>
void main ()
{
    int i = 0;
    while(1)
    {
        printf("%d  ",i);
        i++;
        if(i == 10)
            break;
    }
    printf("came out of while loop");
}


//0  1  2  3  4  5  6  7  8  9  came out of while loop