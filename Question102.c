//Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

/*
Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2

Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1

Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0

Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2

*/
#include <stdio.h>
void main(){
    int n = 0; //number of elements in the array
    printf("Enter number of elements in the array\n");
    scanf("%d",&n);
    int array[n]; //empty array declared
    printf("Enter elements of the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);//assigning values to each index of array through loop
    }
    int target = 0; //target for the search
    printf("Enter target\n");
    scanf("%d",&target);
    int targetIndex = -1; //creating a variable to assign the index at which the condition is met(-1 in case condition is not met)
    for (int i = 0; i < n; i++)
    {
        if (target<=array[i])//comparing each element of the array to find the element that matches the condition
        {
            targetIndex=i;
            break;
        }
    }
    printf("%d",targetIndex);
}
