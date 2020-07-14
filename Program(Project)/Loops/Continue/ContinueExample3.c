#include<stdio.h>
int main(){
    int i=1,j=1;//initializing a local variable
    for(i=1;i<=3;i++){
        for(j=1;j<=3;j++){
            if(i==2 && j==2){
                continue;//will continue loop of j only
            }
            printf("%d %d\n",i,j);
        }
    }//end of for loop
    return 0;
}

//1 1
//1 2
//1 3
//2 1
//2 3
//3 1
//3 2
//3 3