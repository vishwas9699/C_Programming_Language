### C Loops

--------

The looping can be defined as repeating the same process multiple times until a specific condition satisfies. There are three types of loops used in the C language. In this part of the tutorial, we are going to learn all the aspects of C loops.
Why use loops in C language?

The looping simplifies the complex problems into the easy ones. It enables us to alter the flow of the program so that instead of writing the same code again and again, we can repeat the same code for a finite number of times. For example, if we need to print the first 10 natural numbers then, instead of using the printf statement 10 times, we can print inside a loop which runs up to 10 iterations.
Advantage of loops in C

1) It provides code reusability.

2) Using loops, we do not need to write the same code again and again.

2) Using loops, we can traverse over the elements of data structures (array or linked lists).
Types of C Loops

There are three types of loops in C language that is given below:
```objectivec
    do while
    while
    for
```

--------

##### do-while loop in C

The do-while loop continues until a given condition satisfies. It is also called post tested loop. It is used when it is necessary to execute the loop at least once (mostly menu driven programs).

The syntax of do-while loop in c language is given below:
```objectivec
    do{  
    //code to be executed  
    }while(condition);  
```

-------

##### while loop in C

The while loop in c is to be used in the scenario where we don't know the number of iterations in advance. The block of statements is executed in the while loop until the condition specified in the while loop is satisfied. It is also called a pre-tested loop.

The syntax of while loop in c language is given below:
```objectivec
    while(condition){  
    //code to be executed  
    }  
```

--------

##### for loop in C

The for loop is used in the case where we need to execute some part of the code until the given condition is satisfied. The for loop is also called as a per-tested loop. It is better to use for loop if the number of iteration is known in advance.

The syntax of for loop in c language is given below:
```objectivec
    for(initialization;condition;incr/decr){  
    //code to be executed  
    }  
```

--------

