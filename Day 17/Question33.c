//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>
int main () {
    int number = 0;
    int temporary = 0;
    int sum = 0;
    printf("Enter Number : ");
    scanf("%d",&number);
    temporary = number;
    while (temporary!=0)
    {
        sum += pow(temporary%10,3);
        temporary = temporary/10;
    }
    if(sum==number){
        printf("Armstrong\n");
    }
    else{
        printf("Not Armstrong\n");
    }
    return 0;
}