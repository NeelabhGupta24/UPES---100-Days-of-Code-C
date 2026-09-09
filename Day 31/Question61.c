//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1
*/
#include <stdio.h>
#include <stdbool.h>

int main() {
    int n = 0;
    printf("Enter the number of elements in the array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Elements of the array :\n");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int element = 0;
    int index = 0;
    bool flag = false;
    printf("Enter Element to be searched : ");
    scanf("%d",&element);
    for(int j = 0;j<n;j++){
        if(arr[j]==element){
            index = j;
            flag = true;
            break;
        }
    }
    if(flag){
        printf("The element is at index %d\n",index);
    } else{
        printf("Element is not in array\n");
    }
    return 0;
}