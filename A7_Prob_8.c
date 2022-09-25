//Write a program to find next Prime number of a given number.

#include<stdio.h>

int  main()
{
    int  num, i, j, count;

    printf("\nEnter the Number: ");
    scanf("%d",&num);

    for (i=num+1; ; i++)
    {        
        for (j=2; j<i; j++)
            if (i%j==0)
                break;
        if (j==i)
        {
            printf("The Next number is: %d",i);
            break;
        }
    
    }
    return 0;
}