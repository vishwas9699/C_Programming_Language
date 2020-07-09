### C fputc() and fgetc()

-----

##### Writing File : fputc() function

The fputc() function is used to write a single character into file. It outputs a character to a stream.


Syntax
```objectivec
    int fputc(int c, FILE *stream);
```
Example
```objectivec
    #include <stdio.h>  
    main(){  
       FILE *fp;  
       fp = fopen("file1.txt", "w");//opening file  
       fputc('a',fp);//writing single character into file  
       fclose(fp);//closing file  
    }  
```
Output
##### file1.txt
```
a
```

-----

#### Reading File : fgetc() function

The fgetc() function returns a single character from the file. It gets a character from the stream. It returns EOF at the end of file.

Syntax
```objectivec
    int fgetc(FILE *stream);  
```

Example
```objectivec
    #include<stdio.h>  
    #include<conio.h>  
    void main(){  
    FILE *fp;  
    char c;  
    clrscr();  
    fp=fopen("myfile.txt","r");  
      
    while((c=fgetc(fp))!=EOF){  
    printf("%c",c);  
    }  
    fclose(fp);  
    getch();  
    }  
```

Output
myfile.txt
```
this is simple text message
```