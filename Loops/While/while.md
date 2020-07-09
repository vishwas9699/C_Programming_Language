### while loop in C

--------


While loop is also known as a pre-tested loop. In general, a while loop allows a part of the code to be executed multiple times depending upon a given boolean condition. It can be viewed as a repeating if statement. The while loop is mostly used in the case where the number of iterations is not known in advance. 

------

##### Syntax of while loop in C language
      
The syntax of while loop in c language is given below:
```objectivec   
   while(condition){  
          //code to be executed  
   }  
```
          
 --------
 
 ![while](https://static.javatpoint.com/cpages/images/while.png)
 
 -------
 
 
 ##### Properties of while loop
 
   - A conditional expression is used to check the condition. The statements defined inside the while loop will repeatedly execute until the given condition fails.
   - The condition will be true if it returns 0. The condition will be false if it returns any non-zero number.
   - In while loop, the condition expression is compulsory.
   - Running a while loop without a body is possible.
   - We can have more than one conditional expression in while loop.
   - If the loop body contains only one statement, then the braces are optional.

 ----------
 
 ##### Infinitive while loop in C
 
 If the expression passed in while loop results in any non-zero value then the loop will run the infinite number of times.
  ```objectivec
     while(1){  
     //statement  
     }  
   ```  
 ------
 
 