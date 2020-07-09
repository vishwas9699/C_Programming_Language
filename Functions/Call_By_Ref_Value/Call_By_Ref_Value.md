### Call by value and Call by reference in C

------

There are two methods to pass the data into the function in C language, i.e., call by value and call by reference.

![image](https://static.javatpoint.com/cpages/images/callbyvalue-callbyreference-in-c.png)

-----

##### Call by value in C

    - In call by value method, the value of the actual parameters is copied into the formal parameters. In other words, we can say that the value of the variable is used in the function call in the call by value method.
    - In call by value method, we can not modify the value of the actual parameter by the formal parameter.
    - In call by value, different memory is allocated for actual and formal parameters since the value of the actual parameter is copied into the formal parameter.
    - The actual parameter is the argument which is used in the function call whereas formal parameter is the argument which is used in the function definition.

Let's try to understand the concept of call by value in c language by the example given below:

```objectivec
#include<stdio.h>  
void change(int num) {    
    printf("Before adding value inside function num=%d \n",num);    
    num=num+100;    
    printf("After adding value inside function num=%d \n", num);    
}    
int main() {    
    int x=100;    
    printf("Before function call x=%d \n", x);    
    change(x);//passing value in function    
    printf("After function call x=%d \n", x);    
return 0;  
} 
```

Output

```
Before function call x=100
Before adding value inside function num=100
After adding value inside function num=200
After function call x=100
```

------

##### Call by reference in C

    - In call by reference, the address of the variable is passed into the function call as the actual parameter.
    - The value of the actual parameters can be modified by changing the formal parameters since the address of the actual parameters is passed.
    - In call by reference, the memory allocation is similar for both formal parameters and actual parameters. All the operations in the function are performed on the value stored at the address of the actual parameters, and the modified value gets stored at the same address.

Consider the following example for the call by reference.

```objectivec
#include<stdio.h>  
void change(int *num) {    
    printf("Before adding value inside function num=%d \n",*num);    
    (*num) += 100;    
    printf("After adding value inside function num=%d \n", *num);    
}      
int main() {    
    int x=100;    
    printf("Before function call x=%d \n", x);    
    change(&x);//passing reference in function    
    printf("After function call x=%d \n", x);    
return 0;  
}   
```

Output

```
Before function call x=100
Before adding value inside function num=100
After adding value inside function num=200
After function call x=200
```

