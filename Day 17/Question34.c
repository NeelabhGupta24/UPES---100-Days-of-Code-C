//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
int main () {
    int number = 0;
    bool flag = true;
    printf("Enter Number : ");
    scanf("%d",&number);
    for (int i = 2; i < number; i++){
        if ((number%i)==0){
            flag = false;
        }
        
    }
    if(flag){
        printf("Prime\n");
    }
    else{
        printf("Not Prime\n");
    }

    return 0;
}