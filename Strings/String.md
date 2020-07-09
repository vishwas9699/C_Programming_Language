### String in C

The string can be defined as the one-dimensional array of characters terminated by a null ('\0'). The character array or the string is used to manipulate text such as word or sentences. Each character in the array occupies one byte of memory, and the last character must always be 0. The termination character ('\0') is important in a string since it is the only way to identify where the string ends. When we define a string as char s[10], the character s[10] is implicitly initialized with the null in the memory.
    
 There are two ways to declare a string in c language.
    
       1- By char array
       2- By string literal
    
 Let's see the example of declaring string by char array in C language.
 
```objectivec
    char ch[10]={'j', 'a', 'v', 'a', 't', 'p', 'o', 'i', 'n', 't', '\0'};  
```

As we know, array index starts from 0, so it will be represented as in the figure given below.

![strings](https://static.javatpoint.com/cpages/images/c-array.png)

While declaring string, size is not mandatory. So we can write the above code as given below:
```objectivec
    char ch[]={'j', 'a', 'v', 'a', 't', 'p', 'o', 'i', 'n', 't', '\0'};  
```
We can also define the string by the string literal in C language. For example:
```objectivec
    char ch[]="javatpoint";  
```
In such case, '\0' will be appended at the end of the string by the compiler.
--------

##### Difference between char array and string literal

There are two main differences between char array and literal.

    - We need to add the null character '\0' at the end of the array by ourself whereas, it is appended internally by the compiler in the case of the character array.
    - The string literal cannot be reassigned to another set of characters whereas, we can reassign the characters of the array.

--------

##### Example

```objectivec
#include<stdio.h>  
#include <string.h>    
int main(){    
  char ch[11]={'a', 'm', 'a', 'n', 'u', 'l', 'l', 'a','\0'};    
   char ch2[11]="amanulla";    
    
   printf("Char Array Value is: %s\n", ch);    
   printf("String Literal Value is: %s\n", ch2);    
 return 0;    
}   
```
Output
```
Output:
Char Array Value is: amanulla
String Literal Value is: amanulla

```

-------


### C String Functions

There are many important string functions defined in "string.h" library.

|No.|	Function	|Description|
|---|-----|---|
|1)	|strlen(string_name)|	returns the length of string name.|
|2)	|strcpy(destination, source)|	copies the contents of source string to destination string.|
|3)	|strcat(first_string, second_string)|	concats or joins first string with second string. The result of the string is stored in first string.|
|4)	|strcmp(first_string, second_string)|	compares the first string with second string. If both strings are same, it returns 0.|
|5)	|strrev(string)	|returns reverse string.|
|6)|	strlwr(string)|	returns string characters in lowercase.|
|7)|	strupr(string)|	returns string characters in uppercase.|


-------


