// Write a program to print first N terms of Fibonacci series.

#include<stdio.h>

int main()
{
    int num, i, fibonnaci,a=-1,b=1;

    printf("\nEnter a number to display the N terms of Fibonnaci series: ");
    scanf("%d",&num);

    for (i = 1; i <= num; i++)
    {
        fibonnaci=a+b;
        printf(" %d",fibonnaci);
        a=b;
        b=fibonnaci;
    }
    
    return(0);
}