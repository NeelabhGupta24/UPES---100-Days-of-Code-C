//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include <stdio.h>
int main(){
    int first_number,second_number,third_number = 0;
    printf("Input three numbers : ");
    scanf("%d%d%d",&first_number,&second_number,&third_number);
    if(first_number>second_number && third_number<first_number){
        printf("Largest is%d",first_number);
    }
    else if(first_number<second_number && third_number<second_number){
        printf("Largest is %d",second_number);
    }
    if(third_number>second_number && third_number>first_number){
        printf("Largest is %d",third_number);
    }
    return 0;
}