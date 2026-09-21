//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>
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
    char stringreverse[i+1];
    int j = 0;
    while(i>=0)
        {
            stringreverse[j]=string[i-1];
            j++;
            i--;
        }
    printf("%s",stringreverse);
}
