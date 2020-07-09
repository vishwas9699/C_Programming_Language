### Structure of C

-------

![Structure](https://d2h0cx97tjks2p.cloudfront.net/blogs/wp-content/uploads/sites/2/2019/04/Basic-structure-of-C-with-Example.jpg)


-----

```objectivec
    #include <stdio.h>    
    int main(){    
    printf("Hello C Language");    
    return 0;   
    }  
```


```objectivec
#include <stdio.h>  //includes the standard input output library functions. The printf() function is defined in stdio.h .

int main()  //The main() function is the entry point of every program in c language.

printf()  // The printf() function is used to print data on the console.

return 0   //The return 0 statement, returns execution status to the OS. The 0 value is used for successful execution and 1 for unsuccessful execution.
```

------------

### Flow of C Program

#### Execution Flow

-----------

1) C program (source code) is sent to preprocessor first. The preprocessor is responsible to convert preprocessor directives into their respective values. The preprocessor generates an expanded source code.

2) Expanded source code is sent to compiler which compiles the code and converts it into assembly code.

3) The assembly code is sent to assembler which assembles the code and converts it into object code. Now a simple.obj file is generated.

4) The object code is sent to linker which links it to the library such as header files. Then it is converted into executable code. A simple.exe file is generated.

5) The executable code is sent to loader which loads it into memory and then it is executed. After execution, output is sent to console.


![execution flow](https://static.javatpoint.com/cpages/images/c-program-flow.png)