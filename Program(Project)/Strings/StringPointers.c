#include<stdio.h>
void main ()
{
    char *p = "hello aman";
    printf("String p: %s\n",p);
    char *q;
    printf("copying the content of p into q...\n");
    q = p;
    printf("String q: %s\n",q);
}

//String p: hello aman
//copying the content of p into q...
//String q: hello aman

