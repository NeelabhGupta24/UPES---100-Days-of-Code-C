//Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include <stdio.h>
int main () {
    int n = 0 ;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array\n");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j = 0; j<n;j++){
        printf("%d ",arr[n-j-1]);
    }
    return 0;
}