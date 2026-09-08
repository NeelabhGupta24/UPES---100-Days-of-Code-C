//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

#include <stdio.h>
int main () {
    int number = 0;
    int product = 1;
    printf("Enter Number : ");
    scanf("%d",&number);
    while (number!=0){
        int digit = number%10;
        if (digit%2!=0){
            product*=digit;
        }
        number = number/10;
    }
    printf("%d",product);
    return 0;
}