//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <string.h>
int main (){
    char number[20];
    printf("Enter Number : ");
    scanf("%s",&number);
    char first = number[0];
    char last = number[strlen(number)-1];
    number[0] = last;
    number[strlen(number)-1] = first;
    printf("%s",number);
    return 0;
}