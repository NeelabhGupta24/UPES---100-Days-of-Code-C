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
#include <stdio.h>
int main(){
    int Number1 = 0, Number2 = 0; //Creating number variables
    printf("Enter Two Numbers in order\n"); 
    scanf("%d%d",&Number1,&Number2); //Takinf number input
    //Storing Different values of each operation
    int sum = Number1 + Number2;
    int product = Number1 * Number2;
    int difference = Number1 - Number2;
    int Quotient = Number1/Number2;
    printf("Sum : %d, Product : %d, Difference : %d, Quotient : %d\n",sum,product,difference,Quotient); //Displaying the outputs
  
    return 0;
}
