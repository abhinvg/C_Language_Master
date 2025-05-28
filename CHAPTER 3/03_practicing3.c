#include <stdio.h>

int main(){
    int number;
    printf("enter number : ");
    scanf("%d", &number);

    if(number % 5 == 0 && number % 11 == 0)                             // I learnt ----> (we can't write as number%11&&5 == 0)
    {
        printf("divisible by both numbers.");

    }
    else {
        printf("not divisible by both numbers.");
    }
    return 0;
}