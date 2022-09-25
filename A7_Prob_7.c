//Write a program to print all Prime numbers between two given numbers

#include<stdio.h>

int  main()
{
    int  beg, end, i, j;

    printf("\nEnter the Begining Number: ");
    scanf("%d",&beg);
    printf("Enter the last Number: ");
    scanf("%d",&end);
    printf(" \nPrime Numbers are: ");
    for (j=beg+1; j<=end-1; j++)
    {
        for (i=2; i<j; i++)
            if (j%i==0)            
            break;
        if (i==j)
            printf("%d ",j);
    }
    return 0;
}