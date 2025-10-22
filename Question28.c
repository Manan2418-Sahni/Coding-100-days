//Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include <stdio.h>

int main() {
    int n;
    long long product = 1;

    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Multiply even numbers from 2 to n
    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }

    // If n < 2, there were no even numbers
    if (n < 2) {
        printf("No even numbers in the range.\n");
    } else {
        printf("Product of even numbers from 1 to %d is: %lld\n", n, product);
    }

    return 0;
}