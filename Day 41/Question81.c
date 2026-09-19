//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include <stdio.h>
void main(){
    printf("Enter String\n");
    char stri[100];
    scanf("%s",stri);
    int i = 0;
    while (stri[i]!=0)
    {
        i++;
    }
    printf("%d",i);
    
}