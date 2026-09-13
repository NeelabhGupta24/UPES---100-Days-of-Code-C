//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>
int main () {
    int n;
    printf("Enter Number of elements of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Elements of the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j+1];
                arr[j + 1]=arr[j];
                arr[j] = temp; 
            }   
        }
    }
    printf("%d",arr[n-2]);
    return 0;
}