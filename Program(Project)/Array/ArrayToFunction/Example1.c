#include<stdio.h>
int minarray(int arr[],int size){
    int min=arr[0];
    int i=0;
    for(i=1;i<size;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }//end of for    
    return min;
}//end of function

int main(){
    int i=0,min=0;
    int numbers[]={4,5,7,3,8,9};//declaration of array    

    min=minarray(numbers,6);//passing array with size    
    printf("minimum number is %d \n",min);
    return 0;
}

//minimum number is 3

