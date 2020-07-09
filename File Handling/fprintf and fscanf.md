### C fprintf() and fscanf()

---

##### Writing File : fprintf() function

The fprintf() function is used to write set of characters into file. It sends formatted output to a stream.

Syntax:
```objectivec
    int fprintf(FILE *stream, const char *format [, argument, ...]);
```
Example 
```objectivec
    #include <stdio.h>  
    main(){  
       FILE *fp;  
       fp = fopen("file.txt", "w");//opening file  
       fprintf(fp, "Hello file by fprintf...\n");//writing data into file  
       fclose(fp);//closing file  
    }  
```


------

##### Reading File : fscanf() function
      
The fscanf() function is used to read set of characters from file. It reads a word from the file and returns EOF at the end of file.
      
Syntax:
```objectivec
    int fscanf(FILE *stream, const char *format [, argument, ...]);
```

Example
```objectivec
    #include <stdio.h>  
    main(){  
       FILE *fp;  
       char buff[255];//creating char array to store data of file  
       fp = fopen("file.txt", "r");  
       while(fscanf(fp, "%s", buff)!=EOF){  
       printf("%s ", buff );  
       }  
       fclose(fp);  
    }  
```

Output:
Hello file by fprintf...


-----

Example Program to put data in a file
```objectivec
    #include <stdio.h>  
    void main()  
    {  
        FILE *fptr;  
        int id;  
        char name[30];  
        float salary;  
        fptr = fopen("emp.txt", "w");/*  open for writing */  
        if (fptr == NULL)  
        {  
            printf("File does not exists \n");  
            return;  
        }  
        printf("Enter the id\n");  
        scanf("%d", &id);  
        fprintf(fptr, "Id= %d\n", id);  
        printf("Enter the name \n");  
        scanf("%s", name);  
        fprintf(fptr, "Name= %s\n", name);  
        printf("Enter the salary\n");  
        scanf("%f", &salary);  
        fprintf(fptr, "Salary= %.2f\n", salary);  
        fclose(fptr);  
    }  
```
Output:
```
Enter the id 
1
Enter the name 
sonoo
Enter the salary
120000 
```
Now open file from current directory. For windows operating system, go to TC\bin directory, you will see emp.txt file. It will have following information.

emp.txt
```
Id= 1
Name= sonoo
Salary= 120000 
```
      