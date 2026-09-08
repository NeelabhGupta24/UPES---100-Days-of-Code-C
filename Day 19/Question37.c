//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>
int main () {
    int number1 = 0;
    int number2 = 0;
    int LCM = 1;
    printf("Enter two numbers : ");
    scanf("%d%d",&number1,&number2);
    while (true){
        if (LCM%number1==0 && LCM%number2==0){
            printf("LCM : %d\n",LCM);
            break;
        }
        else{
            LCM++;
        }
    }
    return 0;
    
}