// Write a program to find the Nth term of the Fibonnaci series.

#include<stdio.h>

int main()
{
    int num, i, fibonnaci,a=-1,b=1;

    printf("\nEnter a number to find the Nth term of Fibonnaci series: ");
    scanf("%d",&num);

    for (i = 1; i <= num; i++)
    {
        fibonnaci=a+b;        
        a=b;
        b=fibonnaci;
    }
    
    printf("\nThe %dth term of Fibonnaci series is: %d",num,fibonnaci);
    return(0);
}