### Variables in C

-----------

A variable is a name of the memory location. It is used to store data. Its value can be changed, and it can be reused many times.

It is a way to represent memory location through symbol so that it can be easily identified.

Let's see the syntax to declare a variable:

---------

```
type variable_list; 
```



The example of declaring the variable is given below: 

```objectivec
    int a;  
    float b;  
    char c;  
```

Here, a, b, c are variables. The int, float, char are the data types.

We can also provide values while declaring the variables as given below:

```objectivec
    int a=10,b=20;//declaring 2 variable of integer type  
    float f=20.8;  
    char c='A';  
```

-------


##### Rules for defining variables


    - A variable can have alphabets, digits, and underscore.
    - A variable name can start with the alphabet, and underscore only. It can't start with a digit.
    - No whitespace is allowed within the variable name.
    - A variable name must not be any reserved word or keyword, e.g. int, float, etc.

--------

##### Valid variable names:

```objectivec
int a;  
int _ab;  
int a30;
```


##### Invalid variable names:

```objectivec
int 2;  
int a b;  
int long; 
```

---------

#### Types of Variables in C

--------
There are many types of variables in c:

    1- local variable
    2- global variable
    3- static variable
    4- automatic variable
    5- external variable
    
----------

##### Local Variable

A variable that is declared inside the function or block is called a local variable.

It must be declared at the start of the block.

```objectivec
    void function1(){  
    int x=10;//local variable  
    }  
```
    
 -------
 
##### Global Variable
 
 A variable that is declared outside the function or block is called a global variable. Any function can change the value of the global variable. It is available to all the functions.
 
 It must be declared at the start of the block.
 
 ```objectivec
int value=20;//global variable  
void function1(){  
int x=10;//local variable  
} 
```

-------

##### Static Variable

A variable that is declared with the static keyword is called static variable.

It retains its value between multiple function calls.

```objectivec
void function1(){  
int x=10;//local variable  
static int y=10;//static variable  
x=x+1;  
y=y+1;  
printf("%d,%d",x,y);  
} 
```

------

##### Automatic Variable

All variables in C that are declared inside the block, are automatic variables by default. We can explicitly declare an automatic variable using auto keyword.

```objectivec
    void main(){  
    int x=10;//local variable (also automatic)  
    auto int y=20;//automatic variable  
    }  
```

------

##### External Variable

We can share a variable in multiple C source files by using an external variable. To declare an external variable, you need to use extern keyword.

```objectivec
    extern int x=10;//external variable (also global)  
```

--------


