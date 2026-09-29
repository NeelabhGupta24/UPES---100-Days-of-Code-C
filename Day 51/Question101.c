//Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/
#include <stdio.h>
#include <stdbool.h>
void main(){
    int n = 0;
    printf("Enter the Number of elements in the array\n");
    scanf("%d",&n);
    int nums[n];
    printf("Enter Elements of the sorted array\n");
    for (int i = 0; i <n ; i++)
    {
        scanf("%d",&nums[i]);
    }
    int target = 0;
    printf("Enter target\n");
    scanf("%d",&target);
    bool targetFound = false;
    int start = 0;
    int stop = 0;
    for (int i = 0; i < n; i++)
    {
        if (targetFound)
        {
            if (nums[i]==target)
            {
                stop++;
            }
        } else{
            if (nums[i]==target)
            {
                targetFound = true;
                start = i;
                stop = i;
            }
        }  
    }
    if (targetFound==false){
        start = -1;
        stop = -1;
    }
    printf("%d,%d",start,stop);
}
