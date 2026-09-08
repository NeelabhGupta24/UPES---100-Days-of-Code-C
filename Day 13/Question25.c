//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>

int main() {
    char operator = '\0';
    double first_number,second_number = 0;
    printf("Enter Two Numbers in Order : ");
    scanf("%lf%lf",&first_number,&second_number);
    printf("Enter Operator : ");
    scanf(" %c",&operator);
    double result = 0;
    switch(operator)
    {
    case '+':
        result = first_number+second_number;
        printf("%lf\n",result);
        break;
    case '-':
        result = first_number-second_number;
        printf("%lf\n",result);
        break;
    case '*':
        result = first_number*second_number;
        printf("%lf\n",result);
        break;
    case '/':
        result = first_number/second_number;
        printf("%lf\n",result);
        break;
    // case '%%':
    //     result = first_number%second_number;
    //     printf("%lf\n",result)
    default:
        printf("Enter a valid Operator\n");
        break;
    }
    return 0;
}