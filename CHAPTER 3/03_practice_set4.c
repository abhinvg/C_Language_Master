/*Write a program to determine whether a character entered by the user is 
lowercase or not.*/


#include <stdio.h>

int main() {
    char character;
    printf("Enter the character: ");
    scanf(" %c", &character); 

    if(character >= 'a' && character <= 'z') {  
        printf("This is lowercase\n");
    }
    else {
        printf("This is not lowercase\n");
    }
    return 0;
}

// In this code i had taken help of AI.