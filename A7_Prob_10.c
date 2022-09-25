// Write a program to print all Armstrong numbers under 1000.

#include<stdio.h>

int  main()
{
    int  num, num2, cube, result, count;
    printf("\nArmstrong numbers under 1000 are:");

    for (count = 1; count <=1000; count++)
    {
        num=count;
        result=0;
        
        while (num!=0)
        {
            num2=num%10;
            cube=num2*num2*num2;
            //printf("\n Cube is %d ",cube);
            result=result+cube;
            //printf("\nResult is %d ",result);
            num=num/10;
        }
        if (result==count)
            printf("\n%d ",result);
        
    }  
    
    return 0;
}