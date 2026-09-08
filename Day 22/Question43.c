//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include <stdio.h>
int main () {
    int number = 0;
    int sum = 0;
    printf("Enter Number : ");
    scanf("%d",&number);
    int temporary = number;
    while (temporary!=0){
        int digit = temporary%10;
        int factorial = 1;
        for (int i = 1; i <= digit; i++){
            factorial *= i;
        }
        sum+=factorial;
        temporary = temporary/10;
    }
    if (number==sum){
        printf("Strong Number\n");
    } else {
        printf("Not strong number\n");
    }
    
    return 0;
}