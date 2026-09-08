/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include <stdio.h>
int main () {
    int count1 = 1;
    int count2 = 1;

    for (int i = 0; i < 3; i++){
        for (int i = 0; i < count1; i++){
            printf("*\n");
        }
        count1+=2;
        printf("\n");
    }
    for (int i = 0; i < 2; i++){
        for (int i = 0; i < count2; i++){
            printf("*\n");
        }
        printf("\n");
        count2+=2;
    }
    return 0;
}