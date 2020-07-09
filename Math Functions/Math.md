### C Math

C Programming allows us to perform mathematical operations through the functions defined in <math.h> header file. The <math.h> header file contains various methods for performing mathematical operations such as sqrt(), pow(), ceil(), floor() etc.
C Math Functions

There are various methods in math.h header file. The commonly used functions of math.h header file are given below.

|No.|	Function|	Description|
|------|-------|------|
|1)	|ceil(number)|	rounds up the given number. It returns the integer value which is greater than or equal to given number.|
|2)	|floor(number)|	rounds down the given number. It returns the integer value which is less than or equal to given number.|
|3)	|sqrt(number)	|returns the square root of given number.|
|4)	|pow(base, exponent)|	returns the power of given number.|
|5)	|abs(number)	|returns the absolute value of given number.|


-------

##### C Math Example

Let's see a simple example of math functions found in math.h header file.
```objectivec
    #include<stdio.h>  
    #include <math.h>    
    int main(){    
    printf("\n%f",ceil(3.6));    
    printf("\n%f",ceil(3.3));    
    printf("\n%f",floor(3.6));    
    printf("\n%f",floor(3.2));    
    printf("\n%f",sqrt(16));    
    printf("\n%f",sqrt(7));    
    printf("\n%f",pow(2,4));    
    printf("\n%f",pow(3,3));    
    printf("\n%d",abs(-12));     
     return 0;    
    }    
```
Output:
```
4.000000
4.000000
3.000000
3.000000
4.000000
2.645751
16.000000
27.000000
12
```