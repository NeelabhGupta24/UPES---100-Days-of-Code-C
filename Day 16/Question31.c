//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>
int main(){
    int number,binary = 0;
    int count = 1;
    printf("Enter Number :");
    scanf("%d",&number);
    while (number!=0)
    {
        binary += (number%2)*count;
        number/=2;
        count*=10;
    }
    printf("Binary : %d",binary);
    return 0;
}