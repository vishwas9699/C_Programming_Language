### Two Dimensional Array in C

------

The two-dimensional array can be defined as an array of arrays. The 2D array is organized as matrices which can be represented as the collection of rows and columns. However, 2D arrays are created to implement a relational database lookalike data structure. It provides ease of holding the bulk of data at once which can be passed to any number of functions wherever required.

-----

##### Declaration of two dimensional Array in C

The syntax to declare the 2D array is given below.
```objectivec
    data_type array_name[rows][columns];  
```
Consider the following example.
```objectivec
    int twodimen[4][3];  
```
Here, 4 is the number of rows, and 3 is the number of columns.

--------

##### Initialization of 2D Array in C

In the 1D array, we don't need to specify the size of the array if the declaration and initialization are being done simultaneously. However, this will not work with 2D arrays. We will have to define at least the second dimension of the array. The two-dimensional array can be declared and defined in the following way.
```objectivec
    int arr[4][3]={
                        {1,2,3},
                        {2,3,4},
                        {3,4,5},
                        {4,5,6}
                    };  
```

--------
