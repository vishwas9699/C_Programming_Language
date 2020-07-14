### Goto statement in C

----

The goto statement is known as jump statement in C. As the name suggests, goto is used to transfer the program control to a predefined label. The goto statment can be used to repeat some part of the code for a particular condition. It can also be used to break the multiple loops which can't be done by using a single break statement. However, using goto is avoided these days since it makes the program less readable and complecated.

-----

##### Example 

```objectivec
#include <stdio.h>  
int main()   
{  
  int num,i=1;   
  printf("Enter the number whose table you want to print?");   
  scanf("%d",&num);  
  table:   
  printf("%d x %d = %d\n",num,i,num*i);  
  i++;  
  if(i<=10)  
  goto table;    
} 
```

Output

```
Enter the number whose table you want to print?10
10 x 1 = 10
10 x 2 = 20
10 x 3 = 30
10 x 4 = 40
10 x 5 = 50
10 x 6 = 60
10 x 7 = 70
10 x 8 = 80
10 x 9 = 90
10 x 10 = 100

```

