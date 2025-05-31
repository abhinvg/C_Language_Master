 //  Write a program to find greatest of four numbers entered by the user.

#include <stdio.h>

int main(){
    int a ,b ,c ,d ;
    printf("enter 1st no. : \n");
    scanf("%d", & a);
    printf("enter 2nd no. : \n");
    scanf("%d", & b);
    printf("enter 3rd no. : \n");
    scanf("%d", & c);
    printf("enter 4th no. : \n");
    scanf("%d", & d);

    int greatest = a;
    if (b > greatest) greatest = b;  // here i taken help of ai.
    if (c > greatest) greatest = c;
    if (d > greatest) greatest = d;

    printf("The greatest number is: %d", greatest);
    return 0;
}