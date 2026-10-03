//Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

/*
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/
#include <stdio.h>
#include <stdbool.h>
void main(){
    int n = 0;//number of elements in the input array
    printf("Enter number of elements\n");
    scanf("%d",&n);//storing input value in the variable
    int array[n];
    printf("Enter elements of the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    int unique[100][2] = {0}; //array to store unique elements of the input array
    for (int i = 0; i < n; i++)
    {
        bool newFlag = true;
        for (int j = 0; j < n; j++)
        {
                if (array[i]==unique[j][0])
                {
                    newFlag = false;
                }
        }
        if (newFlag)
        {
            for (int j = 0; j < n; j++)
            {
                if (unique[j][0]==0)
                {
                    unique[j][0]=array[i];
                    break;
                }
            }
        }
    }
    for (int j = 0; j <n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (array[i]==unique[j][0])
            {
                unique[j][1]++;
            }
        }
    }
    int major = -1;
    for (int j = 0; j < n; j++)
    {
        if (unique[j][1]>n/2)
        {
            major = unique[j][0];
        }
    }
    printf("%d",major);
}
