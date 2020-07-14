#include<stdio.h>
void main ()
{
    int n=2,i,choice;
    do
    {
        i=1;
        while(i<=10)
        {
            printf("%d X %d = %d\n",n,i,n*i);
            i++;
        }
        printf("do you want to continue with the table of %d , enter any non-zero value to continue.",n+1);
        scanf("%d",&choice);
        if(choice == 0)
        {
            break;
        }
        n++;
    }while(1);
}

//2 X 1 = 2
//2 X 2 = 4
//2 X 3 = 6
//2 X 4 = 8
//2 X 5 = 10
//2 X 6 = 12
//2 X 7 = 14
//2 X 8 = 16
//2 X 9 = 18
//2 X 10 = 20
//do you want to continue with the table of 3 , enter any non-zero value to continue.1
//3 X 1 = 3
//3 X 2 = 6
//3 X 3 = 9
//3 X 4 = 12
//3 X 5 = 15
//3 X 6 = 18
//3 X 7 = 21
//3 X 8 = 24
//3 X 9 = 27
//3 X 10 = 30
//do you want to continue with the table of 4 , enter any non-zero value to continue.0