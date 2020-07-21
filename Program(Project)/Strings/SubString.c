#include<stdio.h>
#include <string.h>
int main(){
    char str[100]="this is programming with c and java";
    char *sub;
    sub=strstr(str,"python");
    printf("\nSubstring is: %s",sub);
    return 0;
}



