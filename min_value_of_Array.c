#include<stdio.h>


int main(){
    int arr[]={1,2,5,6,7,8,9,10,0},min;
    min = arr[0];
    for(int i=0; i<9;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("Minimum number in array is %d ",min);
}

/*
OUTPUT:-
Minimum number in array is 0 
*/