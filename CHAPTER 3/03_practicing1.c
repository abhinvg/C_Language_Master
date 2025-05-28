// Q. Write a program to check if a number is positive or negative.


#include <stdio.h>

int main(){
    int number;
    printf("please enter number : ");
    scanf("%d" , &number);
    if(number>=0){
        printf("The given number is positive.\n");
    }
    
    else
    {
        printf("The given number is negative\n");
    }


    return 0;
}
// This code is working.