/******************************************************************************
         Read two numbers, add them and display their sum
*******************************************************************************/
#include <stdio.h>
void main() 
    {    

        int number1, number2, sum;
    
        printf("Enter two integers: ");
        scanf("%d %d", &number1, &number2);

        sum = number1 + number2;      
    
        printf("%d + %d = %d", number1, number2, sum);
    }