### C fputs() and fgets()

------

The fputs() and fgets() in C programming are used to write and read string from stream. Let's see examples of writing and reading file using fgets() and fgets() functions.

------
##### Writing File : fputs() function

The fputs() function writes a line of characters into file. It outputs string to a stream.

Syntax
```objectivec
int fputs(const char *s, FILE *stream)  
```
Example
```objectivec
    #include<stdio.h>  
    #include<conio.h>  
    void main(){  
    FILE *fp;  
    clrscr();  
      
    fp=fopen("myfile2.txt","w");  
    fputs("hello c programming",fp);  
      
    fclose(fp);  
    getch();  
    }  
```
Output: myfile2.txt
```
hello c programming
```

----

##### Reading File : fgets() function

The fgets() function reads a line of characters from file. It gets string from a stream.

Syntax
```objectivec
    char* fgets(char *s, int n, FILE *stream)  
```
Example
```objectivec
#include<stdio.h>  
#include<conio.h>  
void main(){  
FILE *fp;  
char text[300];  
clrscr();  
  
fp=fopen("myfile2.txt","r");  
printf("%s",fgets(text,200,fp));  
  
fclose(fp);  
getch();  
} 
```
Output
```
hello c programming
```