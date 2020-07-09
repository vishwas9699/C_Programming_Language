### C rewind() function

-----

The rewind() function sets the file pointer at the beginning of the stream. It is useful if you have to use stream many times.

Syntax
```objectivec
    void rewind(FILE *stream)  
```

Example:

File: file.txt

    this is a simple text
    
      
```objectivec
    #include<stdio.h>  
    #include<conio.h>  
    void main(){  
    FILE *fp;  
    char c;  
    clrscr();  
    fp=fopen("file.txt","r");  
      
    while((c=fgetc(fp))!=EOF){  
    printf("%c",c);  
    }  
      
    rewind(fp);//moves the file pointer at beginning of the file  
      
    while((c=fgetc(fp))!=EOF){  
    printf("%c",c);  
    }  
      
    fclose(fp);    
    getch();    
    }    
```
Output
```
this is a simple textthis is a simple text
```