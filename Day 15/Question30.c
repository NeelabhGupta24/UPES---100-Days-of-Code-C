//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>
#include <math.h>
int main(){
    int number,digits,new_number = 0;
    printf("Enter Number : ");
    scanf("%d",&number);
    // new_number = number;
    // while (number!=0){
    //     number = number/10;
    //     digits += 1;
    // }
    // number = new_number;
    // new_number = 0;
    // for (int i = (digits-1); i >= 0 ; i--){
    //     new_number += (number%10)*pow(10,i);
    //     number = number/10;
    // }
    
    while (number!=0){
    new_number = new_number*10 + (number%10);
    number = number/10;
    }
    printf("%d",new_number);
    
    return 0;
}