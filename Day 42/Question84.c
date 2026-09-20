//Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include <stdio.h>
void main(){
    char str[100];
    char str2[100];
    printf("Enter Word\n");
    scanf("%99s",&str);
    int i = 0;
    while (str[i]!='\0')
    {
        str2[i] = str[i]-32;
        i++;
    }
    printf("%s",str2);
}