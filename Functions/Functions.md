### C Functions

-------

In c, we can divide a large program into the basic building blocks known as function. The function contains the set of programming statements enclosed by {}. A function can be called multiple times to provide reusability and modularity to the C program. In other words, we can say that the collection of functions creates a program. The function is also known as procedure or subroutine in other programming languages.

------

#####nAdvantage of functions in C

There are the following advantages of C functions.

    1- By using functions, we can avoid rewriting same logic/code again and again in a program.
    2- We can call C functions any number of times in a program and from any place in a program.
    3- We can track a large C program easily when it is divided into multiple functions.
    4- Reusability is the main achievement of C functions.
    5- However, Function calling is always a overhead in a C program.
    
------


##### Function Aspects

There are three aspects of a C function.

    1- Function declaration A function must be declared globally in a c program to tell the compiler about the function name, function parameters, and return type.

    2- Function call Function can be called from anywhere in the program. The parameter list must not differ in function calling and function declaration. We must pass the same number of functions as it is declared in the function declaration.

    3- Function definition It contains the actual statements which are to be executed. It is the most important aspect to which the control comes when the function is called. Here, we must notice that only one value can be returned from the function.
    
    
------



|SN|	C function aspects	|Syntax|
|----|------|----|
|1	|Function declaration|	return_type function_name (argument list);|
|2	|Function call	|function_name (argument_list)|
|3	|Function definition|	return_type function_name (argument list) {function body;}|


----

##### Types of Functions

There are two types of functions in C programming:

   1-  Library Functions: are the functions which are declared in the C header files such as scanf(), printf(), gets(), puts(), ceil(), floor() etc.
   
   2-  User-defined functions: are the functions which are created by the C programmer, so that he/she can use it many times. It reduces the complexity of a big program and optimizes the code.
  
   
![functions](https://static.javatpoint.com/cpages/images/c-function.jpg)  
------


##### Return Value

A C function may or may not return a value from the function. If you don't have to return any value from the function, use void for the return type.

Let's see a simple example of C function that doesn't return any value from the function.

##### Example without return value:
```objectivec
    void hello(){  
    printf("hello c");  
    }  
```

If you want to return any value from the function, you need to use any data type such as int, long, char, etc. The return type depends on the value to be returned from the function.

Let's see a simple example of C function that returns int value from the function.

##### Example with return value:
```objectivec
    int get(){  
    return 10;  
    }  
```

In the above example, we have to return 10 as a value, so the return type is int. If you want to return floating-point value (e.g., 10.2, 3.1, 54.5, etc), you need to use float as the return type of the method.
```objectivec
    float get(){  
    return 10.2;  
    }  
```

--------

##### Different aspects of function calling

A function may or may not accept any argument. It may or may not return any value. Based on these facts, There are four different aspects of function calls.

    1- function without arguments and without return value
    2- function without arguments and with return value
    3- function with arguments and without return value
    4- function with arguments and with return value
    
    
---


