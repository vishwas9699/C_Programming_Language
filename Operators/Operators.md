### C Operators

--------

An operator is simply a symbol that is used to perform operations. There can be many types of operations like arithmetic, logical, bitwise, etc.

There are following types of operators to perform different types of operations in C language.

   - Arithmetic Operators
   - Relational Operators
   - Shift Operators
   - Logical Operators
   - Bitwise Operators
   - Ternary or Conditional Operators
   - Assignment Operator
   - Misc Operator

------

##### Precedence of Operators in C

The precedence of operator species that which operator will be evaluated first and next. The associativity specifies the operator direction to be evaluated; it may be left to right or right to left.

Let's understand the precedence by the example given below: 

```objectivec
    int value=10+20*10;  
```

The value variable will contain 210 because * (multiplicative operator) is evaluated before + (additive operator).



|Category| 	Operator|	Associativity|
|------|-----|-------|
|Postfix|	() [] -> . ++ - - 	|Left to right|
|Unary |	+ - ! ~ ++ - - (type)* & sizeof 	|Right to left|
|Multiplicative |	* / %	|Left to right|
|Additive |	+ - 	|Left to right|
|Shift |	<< >> 	|Left to right|
|Relational 	|< <= > >= 	|Left to right|
|Equality |	== != 	|Left to right|
|Bitwise AND|	& 	|Left to right|
|Bitwise XOR |	^ 	|Left to right|
|Bitwise OR |	| 	|Left to right|
|Logical AND|	&& 	|Left to right|
|Logical OR |	|| |	Left to right|
|Conditional|	?: 	|Right to left|
|Assignment |	= += -= *= /= %=>>= <<= &= ^= |=	|Right to left|
|Comma |	,| 	Left to right|