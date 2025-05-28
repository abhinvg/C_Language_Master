#include <stdio.h>

int main() {
    int a;
    printf("Please enter your age: ");
    scanf("%d", &a);  

    if(a > 18) 
        printf("You are eligible for driving\n");
    else  
        printf("Not eligible\n");

    return 0;
}

