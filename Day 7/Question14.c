//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

#include <stdio.h>

int main(){
    bool flag = false;
    char ch = '\0';
    printf("Enter a character :");
    scanf(" %c",&ch);
    char vowel[10] = {'a','e','i','o','u','A','E','I','O','U'};
    for (int i = 0; i < 10 ; i++){
        if(ch==vowel[i]){
            flag = true;
        }
    }
    if(flag){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }

    return 0;
}