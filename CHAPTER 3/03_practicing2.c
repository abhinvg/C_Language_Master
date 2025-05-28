// Q. Write a program to determine if a student is eligible to vote (age ≥ 18).

#include <stdio.h>

int main(){
    int age;
    printf("Please enter your age  :\n ");
    scanf("%d" , &age);
    
    if(age>=18){
        printf("You are eligible to vote.\n");
    }
    else if(age<0){
        printf("Invalid age.\n");
    }
else

{
    printf("You are not eligible to vote.\n");

}
    return 0;
}