//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>
int main() {
    int index,n;
    int element;
    printf("Enter number of elements in array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Elements of the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Element and index to be iserted in order :");
    scanf(" %d%d",&element,&index);
    for (int i = n; i > index; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[index] = element;
    for (int i = 0; i <=n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}