//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
#include <string.h>
void main(){
    char string[30];
    printf("Enter string\n");
    scanf("%s",&string);
    int starts[30];
    for (int i = 0; i < strlen(string); i++)
    {
        for (int k = i; k<strlen(string); k++)
        {
            for (int j = i; j <= k; j++)
            {
                printf("%c",string[j]);
            }
            printf(" ");
            
        }
        
    }
}
