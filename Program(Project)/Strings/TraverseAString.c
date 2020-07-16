#include<stdio.h>
void main ()
{
    char s[11] = "amanulla";
    int i = 0;
    int count = 0;
    while(i<11)
    {
        if(s[i]=='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o')
        {
            count ++;
        }
        i++;
    }
    printf("The number of vowels %d",count);
}

//The number of vowels 4


//Traverse Using Null

//    #include<stdio.h>
//    void main ()
//    {
//        char s[11] = "amanulla";
//        int i = 0;
//        int count = 0;
//        while(s[i] != NULL)
//        {
//            if(s[i]=='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o')
//            {
//                count ++;
//            }
//            i++;
//        }
//        printf("The number of vowels %d",count);
//    }


//The number of vowels 4