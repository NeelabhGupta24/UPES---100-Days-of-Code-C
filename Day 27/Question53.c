/*
Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
#include <stdio.h>
int main () {
    int count1 = 1;
    int count2 = 5;

    for (int i = 0; i < 4; i++){
        for (int i = 0; i < count1; i++){
            printf("*");
        }
        count1+=2;
        printf("\n");
    }
    for (int i = 0; i < 3; i++){
        for (int i = 0; i < count2; i++){
            printf("*");
        }
        printf("\n");
        count2-=2;
    }
    return 0;
}