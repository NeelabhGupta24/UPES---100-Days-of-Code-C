//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>
int main() {
    int n = 0;
    printf("Enter Number of elements in an array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int position = 0;
    printf("Enter Position\n");
    scanf("%d",&position);
    while (position>0)
    {
        int temp = arr[n-1];
        for (int i = n-1; i > 0; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[0] = temp;
        position--;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}