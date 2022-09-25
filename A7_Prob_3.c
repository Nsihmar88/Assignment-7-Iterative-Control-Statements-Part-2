// Write a program to check whether a given number is there in the Fibonacci series or not.

#include<stdio.h>

int main()
{
    int num, i, fibonnaci,a=-1,b=1;

    printf("Enter a number to display the Fibonnaci series: ");
    scanf("%d",&num);

    for (i = 1; i <= num+2; i++)
    {
        fibonnaci=a+b;

        if (fibonnaci==num)
        {
            printf("\n%d is in Fibonacci series",num);
            break;
        }      
         
        a=b;
        b=fibonnaci;
    }

    if (fibonnaci!=num)
        
        printf("\n%d is Not in Fibonacci series",num);       
    
    return(0);
}