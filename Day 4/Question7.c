//Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/

#include <stdio.h>
int main(){
    int firstNumber,secondNumber;
    printf("Enter two numbers in order :");
    scanf("%d%d",&firstNumber,&secondNumber);
    printf("Before Swap : %d %d\n",firstNumber,secondNumber);
    firstNumber = firstNumber + secondNumber;
    secondNumber = firstNumber - secondNumber;
    firstNumber = firstNumber - secondNumber;
    printf("After Swap : %d %d\n",firstNumber , secondNumber);
    return 0;
}