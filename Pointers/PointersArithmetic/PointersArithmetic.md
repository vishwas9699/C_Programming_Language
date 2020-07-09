### Pointer Arithmetic in C


We can perform arithmetic operations on the pointers like addition, subtraction, etc. However, as we know that pointer contains the address, the result of an arithmetic operation performed on the pointer will also be a pointer if the other operand is of type integer. In pointer-from-pointer subtraction, the result will be an integer value. Following arithmetic operations are possible on the pointer in C language:

   - Increment
   - Decrement
   - Addition
   - Subtraction
   - Comparison
   
   --------
   
##### Incrementing Pointer in C

If we increment a pointer by 1, the pointer will start pointing to the immediate next location. This is somewhat different from the general arithmetic since the value of the pointer will get increased by the size of the data type to which the pointer is pointing.

We can traverse an array by using the increment operation on a pointer which will keep pointing to every element of the array, perform some operation on that, and update itself in a loop.

The Rule to increment the pointer is given below:

    new_address= current_address + i * size_of(data type)  

Where i is the number by which the pointer get increased.

--------

##### Example

```objectivec

    #include<stdio.h>  
    int main(){  
    int number=50;        
    int *p;//pointer to int      
    p=&number;//stores the address of number variable        
    printf("Address of p variable is %u \n",p);        
    p=p+1;        
    printf("After increment: Address of p variable is %u \n",p); // in our case, p will get incremented by 4 bytes.      
    return 0;  
    }    
```

Output 
```
Address of p variable is 3214864300 
After increment: Address of p variable is 3214864304 
```

----

##### Illegal arithmetic with pointers

There are various operations which can not be performed on pointers. Since, pointer stores address hence we must ignore the operations which may lead to an illegal address, for example, addition, and multiplication. A list of such operations is given below.

    - Address + Address = illegal
    - Address * Address = illegal
    - Address % Address = illegal
    - Address / Address = illegal
    - Address & Address = illegal
    - Address ^ Address = illegal
    - Address | Address = illegal
    - ~Address = illegal

