//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>
#include <stdbool.h>
void main()
{
    char string[20];
    printf("Enter string\n");
    scanf(" %s",&string);
    int i = 0;
    while(string[i]!='\0')
        {
            i++;
        }
    int length = i;
    char stringreverse[i+1];
    int j = 0;
    while(i>=0)
        {
            stringreverse[j]=string[i-1];
            j++;
            i--;
        }
    bool palindrome = true;
    for(int k = 0; k<length; k++){
        if(stringreverse[k]==string[k]){
            continue;
        } else {
            palindrome = false;
        }
    }
    if(palindrome){
        printf("Palindrome");
    } else{
        printf("Not Palindrome");
    }
}
