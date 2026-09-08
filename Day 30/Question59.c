//Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
#include <stdio.h>
int main(){
    int n;
    int even = 0;
    int odd = 0;
    printf("Enter number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for (int j = 0; j < n; j++){
        if (arr[j]%2==0){
            even+=1;
        } else{
            odd+=1;
        }
    }
    printf("Odd = %d, Even = %d\n",odd,even);
    return 0;
}