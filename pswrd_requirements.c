#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>


//atleast 8 character long
//atleast one upper letter
//atleast one lower letter
//atleast one digit
//atleast one symbol

int main(){
    char p[20];
    printf("Please enter a paswrd \n");
    scanf("%[^\n]s",p);
    int i=0,lower=0,upper=0,digit=0,symb =0;
    int len = strlen(p);
    for(i=0;i<len;i++){
        if(islower(p[i])) lower++;
        if(isupper(p[i])) upper++;
        if(isdigit(p[i])) digit++;
        if(ispunct(p[i])) symb++;
    }
    if(strlen(p)<8)
    {
        printf("The Password must be 8 characters\n");
        return 1;
    }
    if(lower == 0)
    {
        printf("You need to enter lower case");
    }
    if(upper == 0)
    {
        printf("you need to enter upper case");
    }
    if(digit == 0)
    {
        printf("you need to enter digit");
    }
    if(symb == 0)
    {
        printf("you need to enter a specail characters");
    }
    if(upper != 0  && lower != 0 && digit != 0 && symb != 0 && len>12)
    {
        printf("your password is very strong!!!!!!");
    }
    if(upper != 0  && lower != 0 && digit != 0 && symb != 0 && len<=12)
    {
        printf("your password is OK");
    }
}


/*
OUTPUT:-
    Please enter a paswrd
    Mounikabochkar@1825
    your password is very strong!!!!!!

    Please enter a paswrd
    mounika
    The Password must be 8 characters

    Please enter a paswrd 
    mounika1825M
    you need to enter a specail characters

    Please enter a paswrd 
    your password is OK

    Please enter a paswrd 
    MOUNIKA@1825
    You need to enter lower case
*/