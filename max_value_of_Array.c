#include<stdio.h>

int main(){
    int arr[]={1,23,45,67,109,68},max;
    max = arr[0];

    for(int i=0;i<6;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("Maximum number in an Array is %d",max);

}
/*
OUTPUT:
Maximum number in an Array is 109
*/