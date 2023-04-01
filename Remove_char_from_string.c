

#include<stdio.h>
#include<string.h>

int main(){
    char str[]="my_learnings";
    char c;
    int len;

    printf("Enter a string you want to remove ");
    scanf("%c",&c);

    len = strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]==c){
            printf("char removed successfully\n");
            for(int j=i;j<len;j++){
                str[j]=str[j+1];
            }
            len--;
            i--;
        }
    }

    printf("After removing the char %c string is %s",c,str);   
}

/*

OUTPUT:

Enter a string you want to remove _
char removed successfully
After removing the char _ string is mylearnings

*/