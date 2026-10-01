//Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

/*
Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/
#include <stdio.h>
void main(){
    int number = 0;
    printf("Enter number\n");
    scanf("%d",&number);
    int pivot = -1;
    for (int i = 1; i <= number; i++)
    {
        int sumLeft = 0;
        int sumRight = 0;
        for (int j = 1; j<i; j++)
        {
            sumLeft+=j;
        }
        for (int j = i+1; j <= number; j++)
        {
            sumRight+=j;
        }
        if (sumLeft==sumRight)
        {
            pivot=i;
            break;
        }
    }
    printf("%d",pivot);
}
