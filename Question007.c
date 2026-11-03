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
    int firstNumber = 0,secondNumber = 0; //Declaring varaibles
    printf("Enter two numbers in order :");
    scanf("%d%d",&firstNumber,&secondNumber); //Taking input
    printf("Before Swap : %d %d\n",firstNumber,secondNumber);
    firstNumber = firstNumber + secondNumber; //Add secondnumber to first number
    secondNumber = firstNumber - secondNumber;//subtracting secondnumber from sum to get firstnumber value
    firstNumber = firstNumber - secondNumber;//subtracting secondnumber which holds firstnumbers intital value to get secondnumbers intial value
    printf("After Swap : %d %d\n",firstNumber , secondNumber); // Display
    
    return 0;
}
