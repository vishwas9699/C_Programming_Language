### Passing Array to Function in C

------

In C, there are various general problems which requires passing more than one variable of the same type to a function. For example, consider a function which sorts the 10 elements in ascending order. Such a function requires 10 numbers to be passed as the actual parameters from the main function. Here, instead of declaring 10 different numbers and then passing into the function, we can declare and initialize an array and pass that into the function. This will resolve all the complexity since the function will now work for any number of values.

As we know that the array_name contains the address of the first element. Here, we must notice that we need to pass only the name of the array in the function which is intended to accept an array. The array defined as the formal parameter will automatically refer to the array specified by the array name defined as an actual parameter.

Consider the following syntax to pass an array to the function.

-----

##### Methods to declare a function that receives an array as an argument

There are 3 ways to declare the function which is intended to receive an array as an argument.
First way:
```objectivec
    return_type function(type arrayname[])  
```
Declaring blank subscript notation [] is the widely used technique.
Second way:
```
    return_type function(type arrayname[SIZE])  
```
Optionally, we can define size in subscript notation [].
Third way:
```
    return_type function(type *arrayname)  
```

------

