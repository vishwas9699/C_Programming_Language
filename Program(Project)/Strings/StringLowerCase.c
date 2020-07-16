#include<stdio.h>
#include <string.h>
int main(){
    char str[20];
    printf("Enter string: ");
    gets(str);//reads string from console
    printf("String is: %s",str);
    printf("\nLower String is: %s",strlwr(str));
    return 0;
}

//Enter string: AMANulla
//String is: AMANulla
//Lower String is: amanulla

