//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include<stdio.h>
int main()
{
    int number , reverse = 0 , remainder ;
    printf("Enter the number");
    scanf("%d",&number);
    while (number ! = 0)
    {
        remainder = number % 10; //get the last digit 
        reverse = reverse * 10 + remainder; //Append it to the reverse 
        number = number/10; //Remove the last digit from the original number
    }
    printf("Reverse number is %d",reverse);
    return 0;
}