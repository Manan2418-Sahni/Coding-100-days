//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include<stdio.h>
int main()
{
    int num ; 
    long fact = 1;
    printf("Enter the number");
    scanf("%d",&num);
    for (int i=num ; i>=1 ; i--)
    {
        fact = fact*i;
    }
    printf("factorial is %ld",fact);
    return 0;
}