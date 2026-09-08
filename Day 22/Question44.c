//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>
int main (){
    int n = 0;
    float sum = 1;
    printf("Enter N : ");
    scanf("%d",&n);
    for(int i = 1; i<n;i++){
        sum+= ((1.00+ (2.00*i)) / (2.00 + (i*2.00)));
    }
    printf("%.2f",sum);
    return 0;
}