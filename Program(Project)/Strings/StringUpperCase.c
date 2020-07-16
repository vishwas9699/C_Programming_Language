#include<stdio.h>
#include <string.h>
int main(){
    char str[20];
    printf("Enter string: ");
    gets(str);//reads string from console
    printf("String is: %s",str);
    printf("\nUpper String is: %s",strupr(str));
    return 0;
}

//Enter string: amanulla
//String is: amanulla
//Upper String is: AMANULLA