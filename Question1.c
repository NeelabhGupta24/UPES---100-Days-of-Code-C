//Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/
#include <stdio.h>
int main () {
    int firstNumber = 0, secondNumber = 0; // Creating Number Variables
    printf("Enter two numbers in order\n");
    scanf("%d%d",&firstNumber,&secondNumber); // Taking input of the numbers using scanf and adressof(&) operator
    int sum = firstNumber + secondNumber; // Calculating Sum
    printf("Sum = %d\n",sum); // Displaying Sum

    return 0;
}
