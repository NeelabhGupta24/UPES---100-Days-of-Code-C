//Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

/*
Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/
#include <stdio.h>
void main(){
    int n = 0;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int answer[n];
    for (int i = 0; i < n; i++)
    {
        int product = 1;
        for (int j = 0; j < n; j++)
        {
            if (i!=j)
            {
                product = product*arr[j];
            }
        }
        answer[i] = product;        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",answer[i]);
    }
}
