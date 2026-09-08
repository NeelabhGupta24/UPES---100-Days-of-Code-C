//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>
int main () {
    int first_number = 0;
    int second_number = 0;
    int HCF = 0;
    printf("Enter Two Number : ");
    scanf("%d%d",&first_number,&second_number);
    for (int i = 1; i <= first_number; i++){
        if (((first_number%i)==0) && ((second_number%i)==0)){
            if (i>HCF){
                HCF = i;
            }
        }
    }
    printf("%d",HCF);
    return 0;
}