//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>
int main () {
    int number = 0; 
    int palindrome = 0;
    int temporary = 0;
    printf("Enter Number : ");
    scanf("%d",&number);
    temporary = number;
    while (temporary!=0)
    {
        palindrome = palindrome*10 + (temporary%10);
        temporary = temporary/10;
    }
    if (number==palindrome)
    {
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }
    
    return 0;
}