#include <stdio.h>
//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

//Answer 2
int main(){
    int Number1, Number2;
    printf("Enter Two Numbers :");
    scanf("%d%d",&Number1,&Number2);
    int sum = Number1 + Number2;
    int product = Number1 * Number2;
    int difference = Number1 - Number2;
    int Quotient = Number1/Number2;
    printf("Sum : %d, Product : %d, Difference : %d, Quotient : %d\n",sum,product,difference,Quotient);
    return 0;
}