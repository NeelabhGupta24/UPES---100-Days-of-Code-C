//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>
int main () {
    int number = 0;
    int sum = 0;
    printf("Enter Number : ");
    scanf("%d",&number);
    while (number!=0){
        sum+=  number%10;
        number = number/10;
    }
    printf("%d",sum);
    return 0;
}