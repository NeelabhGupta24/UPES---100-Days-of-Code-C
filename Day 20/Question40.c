//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
#include <string.h>
int main (){
    char number[65];
    printf("Enter Binary Number : ");
    scanf(" %s",&number);
    for(int i = 0;i < strlen(number);i++){
        if (number[i]=='1'){
            number[i]='0';
        } else {
            number[i]='1';
        }
    }
    printf("%s",number);
    return 0;
}