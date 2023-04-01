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
    printf("Count is %d",count);

    return 0;
}