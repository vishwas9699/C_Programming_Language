#include<stdio.h>
#include<stdlib.h>
void main ()
{
    char c;
    int choice,dummy;
    do{
        printf("\n1. Print Hello\n2. Print Elon Musk \n3. Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :
                printf("Hello");
                break;
            case 2:
                printf("Javatpoint");
                break;
            case 3:
                exit(0);
                break;
            default:
                printf("please enter valid choice");
        }
        printf("do you want to enter more?");
        scanf("%d",&dummy);
        scanf("%c",&c);
    }while(c=='y');
}

//1. Print Hello
//2. Print Elon Musk
//3. Exit
//1
//Hello
//do you want to enter more?
//y
//
//1. Print Hello
//2. Print Elon Musk
//3. Exit
//2
//Elon Musk
//do you want to enter more?
//n
