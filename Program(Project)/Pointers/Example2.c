#include<stdio.h>
int main(){
    int a=10,b=20,*p1=&a,*p2=&b;

    printf("Before swap: *p1=%d *p2=%d",*p1,*p2);
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
    printf("\nAfter swap: *p1=%d *p2=%d",*p1,*p2);

    return 0;
}

//Before swap: *p1=10 *p2=20
//After swap: *p1=20 *p2=10
