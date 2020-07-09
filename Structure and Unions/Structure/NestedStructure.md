### Nested Structure in C

C provides us the feature of nesting one structure within another structure by using which, complex data types are created. For example, we may need to store the address of an entity employee in a structure. The attribute address may also have the subparts as street number, city, state, and pin code. Hence, to store the address of the employee, we need to store the address of the employee into a separate structure and nest the structure address into the structure employee. Consider the following program.
```objectivec
    #include<stdio.h>  
    struct address   
    {  
        char city[20];  
        int pin;  
        char phone[14];  
    };  
    struct employee  
    {  
        char name[20];  
        struct address add;  
    };  
    void main ()  
    {  
        struct employee emp;  
        printf("Enter employee information?\n");  
        scanf("%s %s %d %s",emp.name,emp.add.city, &emp.add.pin, emp.add.phone);  
        printf("Printing the employee information....\n");  
        printf("name: %s\nCity: %s\nPincode: %d\nPhone: %s",emp.name,emp.add.city,emp.add.pin,emp.add.phone);  
    }  
```
Output
```
Enter employee information?
Arun            
Delhi           
110001       
1234567890    
Printing the employee information....   
name: Arun      
City: Delhi  
Pincode: 110001
Phone: 1234567890
```

----------

