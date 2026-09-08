//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <math.h>

int main(){
    double principal,rate,time = 0.00;
    printf("Enter Principal >"); 
    scanf("%lf",&principal);
    printf("Enter Interest Rate in percentage (per year)>");
    scanf("%lf",&rate);
    rate = rate/100;
    printf("Enter total duration of payment (in years) >");
    scanf("%lf",&time);
    double compound = principal*(pow((1+(rate)),time)) - principal;
    double simple = rate*principal*time;
    printf("Compound interest = %.2lf , Simple Interest = %.2lf\n",compound,simple);
    return 0;

}