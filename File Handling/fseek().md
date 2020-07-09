### C fseek() function

----

The fseek() function is used to set the file pointer to the specified offset. It is used to write data into file at desired location.

Syntax
```objectivec
    int fseek(FILE *stream, long int offset, int whence)  
```

There are 3 constants used in the fseek() function for whence: SEEK_SET, SEEK_CUR and SEEK_END.

Example
```objectivec
    #include <stdio.h>  
    void main(){  
       FILE *fp;  
      
       fp = fopen("myfile.txt","w+");  
       fputs("This is javatpoint", fp);  
        
       fseek( fp, 7, SEEK_SET );  
       fputs("sonoo jaiswal", fp);  
       fclose(fp);  
    }  
```

Output: myfile.txt
```
This is sonoo jaiswal
```

-----

