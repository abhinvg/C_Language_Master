/*


Write a program to determine whether a student has passed or failed. To pass, a 
student requires a total of 40% and at least 33% in each subject. Assume there 
are three subjects and take the marks as input from the user.


*/


#include <stdio.h>

int main(){
    int maths;
    printf("enter your maths marks : \n");
    scanf("%d", &maths);

    int physics;
    printf("enter your physics marks : \n");
    scanf("%d", &physics);
    
    int chemistry;
    printf("enter your chemistry marks : \n");
    scanf("%d", &chemistry);


    if( chemistry< 33 || maths< 33 || physics<33){
        printf("You are failed. \n");
    }
    

    else if ( (chemistry+maths+physics )/3 <= 40)
    {
        printf("failed due to less percentage \n");
    }
    else{  
        printf("you are passed, \n");
    }
    

    return 0;
}