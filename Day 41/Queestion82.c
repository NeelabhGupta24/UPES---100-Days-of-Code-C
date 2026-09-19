//Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include <stdio.h>
void main(){
    printf("Enter String\n");
    char stri[100];
    scanf("%s",stri);
    int i = 0;
    while (stri[i]!=0)
    {   
        printf("%c\n",stri[i]);
        i++;
    }
    
}