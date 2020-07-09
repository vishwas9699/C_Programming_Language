### Practice

--------

Identify the erroneous or missing components in the following fucntions

-----

1- 

```objectivec
print_msg(){
    main();
    printf("bye");
}
void main(){
printf("Ths is the main functions");
}
```

--------

2- 

```objectivec
main(){
 //call another functions
dis_error();
}
dis_error();
{
    printf("Error in this function");
}
```

--------


Solutions:

1- There is no error in the code. However the output of the code will be, This is the main function. The function print_msg() is not called by the main function.


2- The Two functions, dis_error() and disp_error(), are not the same because the functions names are different

