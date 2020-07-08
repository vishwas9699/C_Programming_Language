### C Switch Statement

---------

The switch statement in C is an alternate to if-else-if ladder statement which allows us to execute multiple operations for the different possibles values of a single variable called switch variable. Here, We can define various statements in the multiple cases for the different values of a single variable.

The syntax of switch statement in c language is given below:

```objectivec
switch(expression){    
case value1:    
 //code to be executed;    
 break;  //optional  
case value2:    
 //code to be executed;    
 break;  //optional  
......    
    
default:     
 //code to be executed if all cases are not matched;    
}  
```

-----------

##### Rules for switch statement in C language
1) The switch expression must be of an integer or character type.

2) The case value must be an integer or character constant.

3) The case value can be used only inside the switch statement.

4) The break statement in switch case is not must. It is optional. If there is no break statement found in the case, all the cases will be executed present after the matched case. It is known as fall through the state of C switch statement.

Let's try to understand it by the examples. We are assuming that there are following variables.

```objectivec
int x,y,z;  
char a,b;  
float f; 
```

|Valid Switch|	Invalid Switch|	Valid Case	|Invalid Case|
|---|-------|----|------|
|switch(x)|	switch(f)|	case 3;|	case 2.5;|
|switch(x>y)|switch(x+2.5)|	case 'a';	|case x;|
|switch(a+b-2)|		|case 1+2;|	case x+2;|
|switch(func(x,y))|		|case 'x'>'y';|	case 1,2,3;|


--------

![Flochart for switch](https://static.javatpoint.com/cpages/images/cswitch.png)

-------

