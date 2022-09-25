//Write a program to check whether a given number is an Armstrong number or not?

#include<stdio.h>

int  main()
{
    int  num,num1,num2, cube, result=0;

    printf("\nEnter the Number: ");
    scanf("%d",&num);

    num1=num;
    while (num>0)
    {
        num2=num%10;
        cube=num2*num2*num2;
        //printf("\n Cube is %d ",cube);
        result=result+cube;
        //printf("\nResult is %d ",result);
        num=num/10;

    }
    
    if (result==num1)
        printf("\n%d is an Armstrong number",num1);
    else
        printf("\n%d is Not an Armstrong number",num1);
    
    return 0;
}