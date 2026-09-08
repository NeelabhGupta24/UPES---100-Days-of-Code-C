//Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/

#include <stdio.h>

int main(){
    int firstNumber,secondNumber,temporaryNumber;
    printf("Enter two numbers in order :");
    scanf("%d%d",&firstNumber,&secondNumber);
    temporaryNumber = secondNumber;
    secondNumber = firstNumber;
    firstNumber = temporaryNumber;
    printf("After Swap :%d %d",firstNumber,secondNumber);
    return 0;
}