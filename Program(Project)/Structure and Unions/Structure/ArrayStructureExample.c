#include<stdio.h>
#include <string.h>
struct student{
    int rollno;
    char name[10];
};
int main(){
    int i;
    struct student st[5];
    printf("Enter Records of 5 students");
    for(i=0;i<5;i++){
        printf("\nEnter Rollno:");
        scanf("%d",&st[i].rollno);
        printf("\nEnter Name:");
        scanf("%s",&st[i].name);
    }
    printf("\nStudent Information List:");
    for(i=0;i<5;i++){
        printf("\nRollno:%d, Name:%s",st[i].rollno,st[i].name);
    }
    return 0;
}

//Enter Records of 5 students
//Enter Rollno:1
//Enter Name:Sonoo
//Enter Rollno:2
//Enter Name:Ratan
//Enter Rollno:3
//Enter Name:Vimal
//Enter Rollno:4
//Enter Name:James
//Enter Rollno:5
//Enter Name:Sarfraz
//
//Student Information List:
//Rollno:1, Name:Sonoo
//Rollno:2, Name:Ratan
//Rollno:3, Name:Vimal
//Rollno:4, Name:James
//Rollno:5, Name:Sarfraz