//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>
int main() {
    int number = 0;
    printf("Enter number\n");
    scanf("%d",&number);
    int reversedNumber = 0;
    while(number!=0){
        reversedNumber = reversedNumber*10 + number%10; //Each digit is added to reversed number and then multiplied by 10 to shift by one place
        number = number/10;
    }
    printf("%d",reversedNumber);
    
    return 0;
}
