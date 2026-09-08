/*
Q47: Write a program to print the following pattern:
*
**
***
****
*****

Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****

*/
#include <stdio.h>
int main () {
    int count = 0;
    for(int i = 0; i<5;i++){
        for (int i = 0; i <= count; i++){
            printf("*");
        }
        count++;
        printf("\n");
    }
    return 0;
}