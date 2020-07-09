### C Pointers

------

The pointer in C language is a variable which stores the address of another variable. This variable can be of type int, char, array, function, or any other pointer. The size of the pointer depends on the architecture. However, in 32-bit architecture the size of a pointer is 2 byte.

Consider the following example to define a pointer which stores the address of an integer..
```objectivec
    int n = 10;   
    int* p = &n; // Variable p of type pointer is pointing to the address of the variable n of type integer.   
```

--------

##### Declaring a pointer

The pointer in c language can be declared using * (asterisk symbol). It is also known as indirection pointer used to dereference a pointer.
 ```objectivec
    int *a;//pointer to int  
    char *c;//pointer to char  
```

-----

##### Pointer Example

An example of using pointers to print the address and value is given below.

![](https://static.javatpoint.com/cpages/images/pointer.png)

As you can see in the above figure, pointer variable stores the address of number variable, i.e., fff4. The value of number variable is 50. But the address of pointer variable p is aaa3.

By the help of * (indirection operator), we can print the value of pointer variable p.

-------

##### Pointer to array
```objectivec
    int arr[10];  
    int *p[10]=&arr; // Variable p of type pointer is pointing to the address of an integer array arr.  
```

##### Pointer to a function
```objectivec
    void show (int);  
    void(*p)(int) = &display; // Pointer p is pointing to the address of a function  
```

##### Pointer to structure
```objectivec
    struct st {  
        int i;  
        float f;  
    }ref;  
    struct st *p = &ref;  
```

-----

##### Advantage of pointer

1) Pointer reduces the code and improves the performance, it is used to retrieving strings, trees, etc. and used with arrays, structures, and functions.

2) We can return multiple values from a function using the pointer.

3) It makes you able to access any memory location in the computer's memory.

---------

##### Usage of pointer

There are many applications of pointers in c language.
1) Dynamic memory allocation

In c language, we can dynamically allocate memory using malloc() and calloc() functions where the pointer is used.
2) Arrays, Functions, and Structures

Pointers in c language are widely used in arrays, functions, and structures. It reduces the code and improves the performance.

---------

##### Address Of (&) Operator

The address of operator '&' returns the address of a variable. But, we need to use %u to display the address of a variable.
```objectivec
    #include<stdio.h>  
    int main(){  
    int number=50;   
    printf("value of number is %d, address of number is %u",number,&number);    
    return 0;  
    }    
```
Output
```
value of number is 50, address of number is fff4
```

-----

##### NULL Pointer

A pointer that is not assigned any value but NULL is known as the NULL pointer. If you don't have any address to be specified in the pointer at the time of declaration, you can assign NULL value. It will provide a better approach.
```objectivec
int *p=NULL;
```
In the most libraries, the value of the pointer is 0 (zero).

------

