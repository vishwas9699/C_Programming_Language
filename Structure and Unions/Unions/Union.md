### C Union

Like structure, Union in c language is a user-defined data type that is used to store the different type of elements.

At once, only one member of the union can occupy the memory. In other words, we can say that the size of the union in any instance is equal to the size of its largest element.

![unions](https://static.javatpoint.com/cpages/images/c-structure-union.png)

----

##### Advantage of union over structure

It occupies less memory because it occupies the size of the largest member only.
##### Disadvantage of union over structure

Only the last entered data can be stored in the union. It overwrites the data previously stored in the union.
##### Defining union

The union keyword is used to define the union. Let's see the syntax to define union in c.
```objectivec
    union union_name   
    {  
        data_type member1;  
        data_type member2;  
        .  
        .  
        data_type memeberN;  
    };  
```
Let's see the example to define union for an employee in c.
```objectivec
    union employee  
    {   int id;  
        char name[50];  
        float salary;  
    };
```  

------

