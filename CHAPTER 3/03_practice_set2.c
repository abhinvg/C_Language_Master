/*

Calculate income tax paid by an employee to the government as per the slabs 
mentioned below:
 Income Slab Tax 
 2.5 – 5.0L 5%
 5.0L - 10.0L 20%
 Above 10.0L 30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.


tell me only formula to do this question.

*/
#include <stdio.h>

int main(){
    
    float income ,income_tax1 ,income_tax2 ,income_tax3 ;


    printf("enter you income : \n ");
    scanf("%f", &income);

 
    
    if(income<250000)
    {
        printf("no tax applicable");
    }




     else if  (income <= 500000) 
     {
        income_tax1 = (income - 250000) * 0.05;
        printf("Your inxome tax = %f" , income_tax1 );


    }




    else if (income<1000000)
    {
        income_tax2 = (500000 - 250000) * 0.05 + (income - 500000) * 0.20;
        printf("your income tax is = %f" , income_tax2);
    }




        else if (income<3000000)
        {
        income_tax3 = 112500 + (income - 1000000) * 0.30;
            printf("your income tax is =  %f", income_tax3);
        }
    



        
    return 0;
}