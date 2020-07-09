### C Array of Structures

-------

Why use an array of structures?

Consider a case, where we need to store the data of 5 students. We can store it by using the structure as given below.
```objectivec
    #include<stdio.h>  
    struct student  
    {  
        char name[20];  
        int id;  
        float marks;  
    };  
    void main()  
    {  
        struct student s1,s2,s3;  
        int dummy;  
        printf("Enter the name, id, and marks of student 1 ");  
        scanf("%s %d %f",s1.name,&s1.id,&s1.marks);  
        scanf("%c",&dummy);  
        printf("Enter the name, id, and marks of student 2 ");  
        scanf("%s %d %f",s2.name,&s2.id,&s2.marks);  
        scanf("%c",&dummy);  
        printf("Enter the name, id, and marks of student 3 ");  
        scanf("%s %d %f",s3.name,&s3.id,&s3.marks);  
        scanf("%c",&dummy);  
        printf("Printing the details....\n");  
        printf("%s %d %f\n",s1.name,s1.id,s1.marks);  
        printf("%s %d %f\n",s2.name,s2.id,s2.marks);  
        printf("%s %d %f\n",s3.name,s3.id,s3.marks);  
    }  
```
Output
```
Enter the name, id, and marks of student 1 James 90 90  
Enter the name, id, and marks of student 2 Adoms 90 90  
Enter the name, id, and marks of student 3 Nick 90 90       
Printing the details....        
James 90 90.000000                          
Adoms 90 90.000000                      
Nick 90 90.000000 
```
In the above program, we have stored data of 3 students in the structure. However, the complexity of the program will be increased if there are 20 students. In that case, we will have to declare 20 different structure variables and store them one by one. This will always be tough since we will have to declare a variable every time we add a student. Remembering the name of all the variables is also a very tricky task. However, c enables us to declare an array of structures by using which, we can avoid declaring the different structure variables; instead we can make a collection containing all the structures that store the information of different entities.

-------

#### Array of Structures in C

An array of structres in C can be defined as the collection of multiple structures variables where each variable contains information about different entities. The array of structures in C are used to store information about multiple entities of different data types. The array of structures is also known as the collection of structures. 


![Arrayof Struct](https://static.javatpoint.com/cpages/images/array-of-strcutures.png)