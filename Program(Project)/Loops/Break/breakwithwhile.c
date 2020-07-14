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

