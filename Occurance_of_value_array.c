#include<stdio.h>

int main(){
    
    int a[]={1,3,4,1,2,1},x,count=0;
    printf("Enter a number");
    scanf("%d",&x);

    for(int i=0;i<6;i++)
    {
        printf("a[%d]=%d\n",x,a[i]);
        if(a[i]==x){
            count++;
        }
    }
    printf("Count of %d in Array is  %d", x,count);

    return 0;
}

/*
Enter a number1
a[1]=1
a[1]=3
a[1]=4
a[1]=1
a[1]=2
a[1]=1
Count is 3
*/